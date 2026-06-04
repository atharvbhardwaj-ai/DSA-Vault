#include<iostream>
using namespace std;

struct Item{
    int id;
    int price;
};

Item* makeItem(int ID, int PRICE){
    Item *ptr=new Item;
    ptr->id=ID;
    ptr->price=PRICE;
    return ptr;
}

int main(){
    int iD=230,Price=199;
    Item* ptr=makeItem(iD,Price);
    cout << iD <<endl <<Price <<endl;
    return 0;
}