/*5. Create a class LibraryAccount with a data member availableBooks and a
function issueBook(). Throw an exception if the withdrawal amount exceeds
the available balance.*/
#include<iostream>
using namespace std;
class LibraryAccount{
    public:
    int availnobooks = 5;
    int issuereq;



    LibraryAccount(int no){
        this->issuereq = no;
    }
    
    void Issuebook(){
        if(issuereq>availnobooks){
            throw "The available number of books limit exceeds!";
        }
        if(issuereq<0){
            throw "The isssue request cannot be in negative..\n";
        }
        std::cout<<"The books issued..\n";
        availnobooks-=issuereq;
        std::cout<<"Remaining book in account-> "<<availnobooks<<"\n";
        
        
    }

};
int main(){

    try{

        std::cout<<"Enter the number of books you want to issue: ";
        int no;
        std::cin>>no;
        LibraryAccount A(no);
        A.Issuebook();
    }catch(const char *e){
     std::cout<<"Exception Ocurred: "<<e<<"\n";
    }
 
 
 
}