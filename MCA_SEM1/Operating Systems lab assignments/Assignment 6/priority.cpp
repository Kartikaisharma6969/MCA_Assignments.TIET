//in this program the priority based scheduling will be applied on the given batch of processes//
#include<iostream>
#include<vector>
#include<queue>
class Process{
    public:
    std::string PID;
    int priority;
    double AT;
    double BT;
    double CT;
    double TAT;
    double WT;


    //constructor to input//

    Process(std::string p, double A, double B,int pri){
        this->PID = p;
        this->AT = A;
        this->BT = B;
        this->CT = 0;
        this->TAT = 0;
        this->WT = 0;
        this->priority = pri;
    }



};
std::vector<Process> Priorityscheduling(std::vector<Process> &vec){
    std::queue<Process> q;
    //pushing each processs into queue//

    for(int i = 0 ; i<vec.size();i++){
        q.push(vec[i]);
    }


    while (!q.empty())
    {
        
    }
    
}
int main(){
    std::vector<Process>pbatch;

    std::cout<<"<--------Welcome to the FCFS------->\n";
    std::cout<<"Enter the process batch below: \n";
    std::cout<<"\n";
    
    

    int idx = 0;
    int inp;


    do{
        std::cout<<"Enter the Process no "<<idx+1<<" details Below: \n";
        std::cout<<"Enter the Process ID: ";
        std::string pid;
        std::cin>> pid;

        std::cout<<"Enter the Arrival time of Process "<<pid<<":";
        double At;
        std::cin>>At;

        std::cout<<"Enter the Burst Time of Process "<<pid<<":";
        double BT;
        std::cin>>BT;

        std::cout<<"Enter the priority of the Entered Process "<<pid<<": ";
        int prio;
        std::cin>>prio;



        pbatch.emplace_back(pid,At,BT,prio);

        std::cout<<"Enter 0 if you want to add another Process or Enter -1 if to exit: ";
        std::cin>>inp;

     idx++;
    }while(inp!=-1);



    std::cout<<"The avg Turnaround Time (TAT): \n";
    std::cout<<"The Average Waiting time (WT): \n";
 
}
 
 
 
