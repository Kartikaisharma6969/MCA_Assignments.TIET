//Priority based scheduling//
#include<iostream>
#include<vector>
#include<string>
#include<utility>

class Process{
    public:
    std::string PID;
    int Bt;
    int Priority;
    int CT;
    int TAT;
    int WT;

    //Constructorcall//
    Process(std::string s, int b, int p){
        this->PID = s;
        this->Bt = b;
        this->Priority = p;
        this->CT = -1;
        this->TAT = -1;
        this->WT = -1;
    }

};

std::pair<double,double> DisplayProcessTable(std::vector<Process>& v){

    double totaltat = 0;
    double totalWt = 0;

    std::cout<<"Process ID      BT        Priority      CT        TAT        WT\n";

    for(int i = 0 ; i<v.size(); i++){

        std::cout<<v[i].PID<<"              "<<v[i].Bt<<"          "<<v[i].Priority<<"          "
        <<v[i].CT<<"          "<<v[i].TAT<<"          "<<v[i].WT<<"\n";

        totaltat = totaltat + v[i].TAT;
        totalWt = totalWt + v[i].WT;

    }

    if(v.empty()){
        return {0,0};
    }

    double avgtat = totaltat/v.size();
    double avgwt = totalWt/v.size();

    return {avgtat,avgwt};

}

void PriorityScheduling(std::vector<Process>&vec){

    int time = 0;
    int completed = 0;

    while(completed < vec.size()){

        int minPriority = 999999;
        int index = -1;

        //Finding the highest priority process//

        for(int j = 0 ; j<vec.size(); j++){

            if(vec[j].CT == -1){

                if(vec[j].Priority < minPriority){
                    minPriority = vec[j].Priority;
                    index = j;
                }

            }

        }

        //Executing the selected process//

        if(index != -1){

            time = time + vec[index].Bt;

            vec[index].CT = time;

            vec[index].TAT = vec[index].CT;

            vec[index].WT = vec[index].TAT - vec[index].Bt;

            completed++;

        }

    }

}

int main(){

    std::vector<Process> v;

    std::cout<<"|----------------------------------------------------------------|\n";
    std::cout<<"<--------Welcome to the Priority Scheduling page---------------->\n";
    std::cout<<"|----------------------------------------------------------------|\n";

    int inp;

    std::cout<<"Enter the process info(Process ID, Burst Time, Priority) below:\n";
    std::cout<<"Enter -1 if you want to exit processes creation..\n";

    int idx = 0;

    do{

        std::cout<<"Enter the process no "<<idx+1<<" details below :\n";
        std::cout<<"\n";

        std::cout<<"Process ID "<<idx+1<<"(i.e P1, P2,P3) :";
        std::string id;
        std::cin>>id;

        std::cout<<"Burst Time: ";
        int bt;
        std::cin>>bt;

        std::cout<<"Priority: ";
        int p;
        std::cin>>p;

        v.emplace_back(id,bt,p);

        std::cout<<"Enter new Process ?(Press 0 for yes/ -1 for no and exit): ";
        std::cin>>inp;
        std::cout<<"\n";

        idx++;

    }while(inp != -1);

    PriorityScheduling(v);

    std::pair<double,double> ans = DisplayProcessTable(v);

    std::cout<<"\nAverage Turnaround Time: "<<ans.first;
    std::cout<<"\nAverage Waiting Time: "<<ans.second;

}
