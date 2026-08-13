/*
4) String Related Programs
(a) Write a program to concatenate one string to another string.
(b) Write a program to reverse a string.
(c) Write a program to delete all the vowels from the string.
(d) Write a program to sort the strings in alphabetical order.
(e) Write a program to convert a character from uppercase to lowercase.

*/
#include<iostream>
#include<string>
using namespace std;
string stringconcat(string s1, string s2){
    char *ptrs1 = &s1[0];
    char *ptrs2 = &s2[0];
    while(ptrs1=='\0'){
        

    }


}
string Reversingstring(string & s1,int size){
  
    char *start = &s1[0];
    char *end = &s1[size-1];

    while(start<end){
        swap(*start,*end);
        start++;
        end--;
    }
    return s1;

}
int calculatesizeofstring( string s){
   char *ptr = &s[0];
        int size = 0;
    while(*ptr!='\0'){
        size++;
        ptr++;


    }
    return size;
    
}
void Deleteallvowels(string & s1){
    char *ptr = &s1[0];
    while(*ptr!='\0'){
        if(*ptr == 'a'||'e'||'i'||'o'||'u'){
            continue;
        }else{
            cout<<*ptr;
        }
        ptr++;
    }
    
}
int main(){
    string a ,b;
    int sizeofs1;
    int sizeofs2;


    cout<<"Enter the string 1: ";
    cin >>a;
    cout<<"Enter the string 2: ";
    cin>>b;
    char *ptr1 = &a[0];
    char *ptr2 = &b[0];


    cout<<"The concatenation operation on string gives: "<<stringconcat(a,b)<<endl;
    sizeofs1 =calculatesizeofstring(a);
    cout<<" calculating the size of string: "<<sizeofs1<<endl;


    cout<<"The reverse Operation on string gives: "<<Reversingstring(a,sizeofs1)<<endl;

    cout<<"Delete all vowels: ";
    Deleteallvowels(a);


 
 
 
}