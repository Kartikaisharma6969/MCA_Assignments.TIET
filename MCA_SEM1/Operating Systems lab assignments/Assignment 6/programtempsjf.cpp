//Implementing the SJF Non PREEMPPTIVE scheduling//
#include<iostream>
#include<vector>
#include<memory>
class Process{
    public:
    std::string PID;
    int BT;
    int AT;
    int CT;
    int TAT;
    int WT;


    //ctor//
    Process(std::string s, int a, int b, int c, int t,int w){
        this->PID = s;
        this->AT = a;
        this->BT = b;
        this->CT = c;
        this->TAT = t;
        this->WT = w;

    }
};

void SJFpreemptiveApplication(std::vector<Process>vec){
    int completed = 0 ;
    int time = 0;

    while(completed<vec.size()){
        int miniBT = 99999999;
        int index = -1;

        for(int i = 0 ; i<vec.size(); i++){  //traveresiing the vector to check for the processes which are arrived acc to the current time
            if(vec[i].AT <= time && vec[i].CT == -1){
                if(vec[i].BT<miniBT){
                    miniBT = vec[i].BT;
                    index = i;
                }
            }
        }

        if(index == -1){
            time++;
        }

        //Noe executing the processes..////
        else{
            time = time + vec[index].BT;

            //finding the completion time//
            vec[index].CT = time;
            //finding the tat//
            vec[index].TAT = vec[index].CT - vec[index].AT;
            //finding the waiting time//
            vec[index].WT = vec[index].TAT - vec[index].WT;

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




 
 
}