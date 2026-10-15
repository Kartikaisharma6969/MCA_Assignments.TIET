//write a cpp program to demonstrate single inheritance //
#include<iostream>
class  Person{
    public:
    std::string name;
    int Age;
    public:

    Person(std::string c_name, int c_age){
        this->Age = c_age;
        this->name = c_name;
    }

    ~Person(){
        std::cout<<"Destructor of person called..\n";
    }

};
class Student: public Person{
    public:
    int Roll_No;
    std::string Course;

    Student(std::string c_name , int c_age , int c_rollno , std::string c_course):Person(c_name,c_age){
        this->Roll_No = c_rollno;
        this->Course = c_course;

    }

    //memeber function//
    void display_details(){
        std::cout<<"Name of the student: "<<name<<"\n";
        std::cout<<"Rollno of "<<name<<" :"<<Roll_No<<" \n";
        std::cout<<"Age of "<<name<<": "<<Age<<" \n";
        std::cout<<"Course taken by "<<name<<" :"<<Course<<"\n";
    }
        ~Student(){
        std::cout<<"Destructor of Student called..\n";
    }


};
int main(){
    Student A("Kartikai" , 22 , 55, "MCA");
    A.display_details();
 
 
 
}