/*
3. Create a C++ program to demonstrate Multiple Inheritance.
Create two base classes:
Academic → stores Marks
Sports → stores Sports Score
Create a derived class Result that inherits from both classes and calculates the
total score and displays the result.
*/
#include<iostream>
class Academic{
    public:
    int marks;

    Academic(int c_marks){
        this->marks = c_marks;
    }


};
class Sports{
    public:
    int sports_score;
    Sports(int c_sports_score){
        this->sports_score = c_sports_score;
    }


};
class Result:public Academic , Sports{

    public:

    Result(int c_sports_score , int c_marks): Sports(c_sports_score),Academic(c_marks){

        

    }

    void display(){

        std::cout<<"Result-->\n";
        std::cout<<"Sports score: "<<sports_score<<"/10\n";
        std::cout<<"Marks: "<<marks<<"/10\n";
        


    }


};
int main(){
    Result  A(10 , 5);
    A.display();
 
 
}