/*
Q6. Shopping Bill Generator
Create a class Bill with overloaded functions named calculateBill() to calculate:
 The bill for one item using quantity and unit price.
 The bill for two items using their quantities and prices.
 The bill for a bill amount after applying a discount percentage.
Use suitable parameter lists and return the final bill amount.
*/
#include<iostream>
using namespace std;
class Bill{
    public:


    void  CalculateBill(int quantity, int uni_price){
        std::cout<<"Quantity of product : "<<quantity<<"\n";
        std::cout<<"per unit price of product : "<<uni_price<<"\n";

        std::cout<<"Amount Bill generated: "<<quantity * uni_price;


    }
    void  CalculateBill(int quantity, double uni_price, int quantity2 , int uni_price2){
        std::cout<<"Quantity of product : "<<quantity + quantity2<<"\n";
        std::cout<<"per unit price of product : "<<uni_price  + uni_price2<<"\n";
        int total = (quantity2 + quantity) * (uni_price2 *uni_price);

        std::cout<<"Amount Bill generated: "<<total<<"\n";


    }

};
int main(){
    Bill A;
    A.CalculateBill(2,4);
    cout<<"\n";
    
    A.CalculateBill(2,4,1,2);
    
 
 
 
}