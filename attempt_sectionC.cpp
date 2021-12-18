
//Section C Part One
#include <iostream>
#include<vector>

using namespace std;

class Item{
    private:
        string item;
        long id;
        double price;
        int amountstock;
        
    public:
    //Constructor 
        Item(string p, long i, double pri, int a){
        item = p;
        id = a;
        price = pri;
        amountstock = a;
        }
        
    //Just in case: SETTERS
        void getItem(string p){
            item = p;}
        void getID(long i){
            id = i;}
        void getPrice(double pri){
            price = pri;}
        void setAmountStock(int a){
            amountstock = a;
        }
        
    //GETTERS
    
        string getItem(){
            return item;}
        long getID(){
            return id;}
        double getPrice(){
            return price;}
        int get AmountStock(){
            return amountstock;
        }

}

class Store{
    vector<string>products;
    for()
    
    
}

class Order{
    for(int)
    
}
int main()
{
    cout<<"Hello World";

    return 0;
}

