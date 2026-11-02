/*1. Write a C program to implement the First Come First Serve (FCFS) CPU scheduling
algorithm. Calculate the waiting time and turnaround time for each process, along with
the average waiting time and average turnaround time.*/

/*1. Write a C program to implement the First Come First Serve (FCFS) CPU scheduling
algorithm. Calculate the waiting time and turnaround time for each process, along with
the average waiting time and average turnaround time.*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
class Process{
    public:
    std::string p_name;
    int At;
    int Bt;
    int ct;
    int tat;
    int wt;

    //ctor//
    Process(std::string p , int a , int b){
        this->Bt = b;
        this->At = a;
        this->p_name = p;
        this->ct = -1;
        this->tat = -1;
        this->wt = -1;

    }

};

std::pair<double,double> DisplayStarterProcessTable(std::vector<Process>& v){
    double totaltat = 0;
    double totalWt = 0;
    std::cout<<"Process ID      AT        BT           CT          TAT          WT\n";

    for(int i = 0 ; i<v.size(); i++){

        std::cout<<v[i].p_name<<"              "<<v[i].At<<"          "<<v[i].Bt<<"          ";
        if(v[i].ct!= -1 &&v[i].tat!= -1&& v[i].wt!= -1){
            std::cout<<v[i].ct<<"          "<<v[i].tat<<"             "<<v[i].wt<<"\n";
            totaltat = totaltat + v[i].tat;
            totalWt = totalWt + v[i].wt;
           
        }
        else{
            std::cout<<"-          -             -\n";
        }

    
    }
    
    if(v.empty()){
        return {0,0};
    }

    double avgtat = totaltat/v.size();
    double avgwt = totalWt/v.size() ;

    return {avgtat, avgwt};


}
void Sequencebuilder(std::vector<Process>& v){//
    //since fcfs is simply which comes in arrival first that will be executed//
    std::cout<<"The correct sequence of the execution is: \n";

    for(int i  = 0 ; i<v.size(); i++){
        std::cout<<v[i].p_name<<"->";

    }
}
void FCFSApplication(std::vector<Process>&vec){
    int currct = 0;
    for(int i = 0 ; i<vec.size(); i++){
      //calculating the CT: //
      currct = std::max(currct,vec[i].At) + vec[i].Bt;
      vec[i].ct = currct;
      //Calculating the TAT//
      vec[i].tat = vec[i].ct - vec[i].At;
      //waiting time//
      vec[i].wt = vec[i].tat - vec[i].Bt;
    }

}
int main(){
    std::vector<Process> v;

    std::cout<<"|--------------------------------------------------|\n";
    std::cout<<"<--------Welcome to the FCFS scheduling page------>\n";
    std::cout<<"|--------------------------------------------------|\n";
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

    //Sorting according to Arrival Time//
    std::stable_sort(v.begin(),v.end(),[](const Process& a,const Process& b){
        return a.At < b.At;
    });

    std::cout<<"Printing the Entered table \n";


    DisplayStarterProcessTable(v);
    
    FCFSApplication(v);

    std::cout<<"Calculations Done: \n";
    std::pair<double, double> res =    DisplayStarterProcessTable(v);
    std::cout<<"The Average turnaround time is: "<<res.first<<"\n";
    std::cout<<"The Average Waiting time is: "<<res.second;
    std::cout<<"\n";

    Sequencebuilder(v);

    return 0;
}
