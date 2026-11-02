//Round Robin//
#include<iostream>
#include<vector>
#include<string>
#include<utility>
class Process{
    public:
    std::string PID;
    int Bt;
    int RemainingBt;
    int CT;
    int TAT;
    int WT;

    //Constructorcall//
    Process(std::string s, int b){
        this->PID = s;
        this->Bt = b;
        this->RemainingBt = b;
        this->CT = -1;
        this->TAT = -1;
        this->WT = -1;
    }

};

std::pair<double,double> DisplayProcessTable(std::vector<Process>& v){

    double totaltat = 0;
    double totalWt = 0;

    std::cout<<"Process ID      BT        CT        TAT        WT\n";

    for(int i = 0 ; i<v.size(); i++){

        std::cout<<v[i].PID<<"              "<<v[i].Bt<<"          "
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

void RoundRobinScheduling(std::vector<Process>&vec,int tq){

    int time = 0;
    int completed = 0;

    while(completed < vec.size()){

        for(int i = 0 ; i<vec.size(); i++){

            if(vec[i].RemainingBt > 0){

                if(vec[i].RemainingBt > tq){

                    time = time + tq;
                    vec[i].RemainingBt = vec[i].RemainingBt - tq;

                }
                else{

                    time = time + vec[i].RemainingBt;
                    vec[i].RemainingBt = 0;

                    vec[i].CT = time;

                    vec[i].TAT = vec[i].CT;

                    vec[i].WT = vec[i].TAT - vec[i].Bt;

                    completed++;

                }

            }

        }

    }

}

int main(){

    std::vector<Process> v;

    std::cout<<"|----------------------------------------------------------------|\n";
    std::cout<<"<--------Welcome to the Round Robin Scheduling page-------------->\n";
    std::cout<<"|----------------------------------------------------------------|\n";

    int inp;

    std::cout<<"Enter the process info(Process ID, Burst Time) below:\n";
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

        v.emplace_back(id,bt);

        std::cout<<"Enter new Process ?(Press 0 for yes/ -1 for no and exit): ";
        std::cin>>inp;
        std::cout<<"\n";

        idx++;

    }while(inp != -1);

    int tq;

    std::cout<<"Enter Time Quantum: ";
    std::cin>>tq;

    if(tq <= 0){
        std::cout<<"Invalid Time Quantum!";
        return 0;
    }

    RoundRobinScheduling(v,tq);

    std::pair<double,double> ans = DisplayProcessTable(v);

    std::cout<<"\nAverage Turnaround Time: "<<ans.first;
    std::cout<<"\nAverage Waiting Time: "<<ans.second;

}
