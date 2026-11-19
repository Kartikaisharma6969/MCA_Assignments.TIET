#include<iostream>
#include<vector>
#include<algorithm>
class Process{
    public:
    std::string PID;
    double AT;
    double BT;
    double CT;
    double TAT;
    double WT;


    //constructor to input//

    Process(std::string p, double A, double B){
        this->PID = p;
        this->AT = A;
        this->BT = B;
        this->CT = 0;
        this->TAT = 0;
        this->WT = 0;
    }



};
void DisplaytheentredProcesses(std::vector<Process>vec){
    std::cout<<"The table looks like: \n";

    std::cout<<"Processes           AT              BT                CT               TAT                 WT\n";
    for(int i = 0 ; i<vec.size(); i++){
        std::cout<<vec[i].PID<<"                   "<<vec[i].AT<<"               "<<vec[i].BT<<"                 "<<vec[i].CT<<"                "<<vec[i].TAT<<"                    "<<vec[i].WT<<"\n";
    }
}

std::pair<double,double> CalculatingFCFS(std::vector<Process>&vec){
    double currCT= 0;
    double totalTAT = 0;
    double totalWT = 0;
    for(int i = 0 ; i<vec.size();i++){
        currCT = std::max(currCT,vec[i].AT ) + vec[i].BT;
        vec[i].CT = currCT;
        vec[i].TAT = vec[i].CT - vec[i].AT;
        totalTAT = totalTAT + vec[i].TAT;
        vec[i].WT = vec[i].TAT - vec[i].BT;
        totalWT = totalWT + vec[i].WT;
    }

    double avgTat = totalTAT / vec.size();
    double avgWT = totalWT / vec.size();

    return {avgTat,avgWT};

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

        pbatch.emplace_back(pid,At,BT);

        std::cout<<"Enter 0 if you want to add another Process or Enter -1 if to exit: ";
        std::cin>>inp;

     idx++;
    }while(inp!=-1);

    


    std::cout<<"Before FCF Application\n";

    DisplaytheentredProcesses(pbatch);
    
    std::pair<double,double> anspair = CalculatingFCFS(pbatch);

    std::cout<<"After FCFS application: \n";
    DisplaytheentredProcesses(pbatch);

    std::cout<<"The avg Turnaround Time (TAT): "<<anspair.first<<"\n";
    std::cout<<"The Average Waiting time (WT): "<<anspair.second<<"\n";
 
}