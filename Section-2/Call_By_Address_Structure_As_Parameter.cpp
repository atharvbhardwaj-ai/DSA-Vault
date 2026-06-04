#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void ChangeLength(Rectangle * p){
    p->length=15;
}

int main(){
    Rectangle r;
    Rectangle * ptr;
    
    ptr=&r;
    r.length=10;
    r.breadth=5;
    
    ChangeLength(ptr);
    cout << "Length of Rectangle = " << r.length <<endl;
    
    return 0;
}