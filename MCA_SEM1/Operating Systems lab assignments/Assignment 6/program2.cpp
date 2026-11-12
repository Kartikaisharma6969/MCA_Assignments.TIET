
#include<iostream>
#include<vector>
#include<string>
#include<utility>
class Process{
    public:
    std::string PID;
    int Bt;
    int At;
    int CT;
    int TAT;
    int WT;

    //Constructorcall//
    Process(std::string s, int a, int b){
        this->PID = s;
        this->At = a;
        this->Bt = b;
        this->CT = -1;
        this->TAT= -1;
        this->WT = -1;
    }

};

std::pair<double,double> DisplayStarterProcessTable(std::vector<Process>& v){
    double totaltat = 0;
    double totalWt = 0;
    std::cout<<"Process ID      AT        BT           CT          TAT          WT\n";

    for(int i = 0 ; i<v.size(); i++){

        std::cout<<v[i].PID<<"              "<<v[i].At<<"          "<<v[i].Bt<<"          ";
        if(v[i].CT!= -1 &&v[i].TAT!= -1&& v[i].WT!= -1){
            std::cout<<v[i].CT<<"          "<<v[i].TAT<<"             "<<v[i].WT<<"\n";
            totaltat = totaltat + v[i].TAT;
            totalWt = totalWt + v[i].WT;
        }
        else{
            std::cout<<"-          -             -\n";
        }
    }

    if(v.empty()){
        return {0,0};
    }

    double avgtat = totaltat/v.size();
    double avgwt = totalWt/v.size();

    return {avgtat, avgwt};
}

void SJFapplication(std::vector<Process>&vec){

    int time = 0;
    int completed = 0;

    while(completed < vec.size()){

        int minBT = 999999;
        int index = -1;

        //finding the shortest job in ready queue//

        for(int j = 0 ; j<vec.size(); j++){

            if(vec[j].At <= time && vec[j].CT == -1){

                if(vec[j].Bt < minBT){
                    minBT = vec[j].Bt;
                    index = j;
                }

            }

        }

        //checking if any process is available//

        if(index == -1){
            time++;
        }
        else{

            //executing the selected process//

            time = time + vec[index].Bt;

            vec[index].CT = time;

            vec[index].TAT = vec[index].CT - vec[index].At;

            vec[index].WT = vec[index].TAT - vec[index].Bt;

            completed++;

        }

    }

}

int main(){
    std::vector<Process> v;

    std::cout<<"|----------------------------------------------------------------|\n";
    std::cout<<"<--------Welcome to the SJF(NON preemptive) scheduling page------>\n";
    std::cout<<"|----------------------------------------------------------------|\n";

    int inp;

    std::cout<<"Enter the process info(Process ID, Arrival time, Burst Time) below:\n";
    std::cout<<"Press enter  each time you want to add the process to table..\n";
    std::cout<<"Enter -1 if you want to exit processes creation..\n";

    int idx = 0;

    do{
        std::cout<<"Enter the process no "<<idx+1<<" details below :\n";
        std::cout<<"\n";

        std::cout<<"Process ID "<<idx+1<<"(i.e P1, P2,P3) :";
        std::string id;
        std::cin>>id;

        std::cout<<"Arrival Time: ";
        int at;
        std::cin>>at;

        std::cout<<"Burst Time: ";
        int bt;
        std::cin>>bt;

        v.emplace_back(id,at,bt);

        std::cout<<"Enter new Process ?(Press 0 for yes/ -1 for no and exit): ";
        std::cin>>inp;
        std::cout<<"\n";

        idx++;

    }while(inp != -1);

    SJFapplication(v);

    std::pair<double,double> ans = DisplayStarterProcessTable(v);

    std::cout<<"\nAverage Turnaround Time: "<<ans.first;
    std::cout<<"\nAverage Waiting Time: "<<ans.second;

}
