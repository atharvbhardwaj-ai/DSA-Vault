#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(Rectangle r1){   // Use Formal Argument as &r1 to Call By Reference
    return r1.length * r1.breadth;
}

int main(){
    Rectangle r;
    r.length=10;
    r.breadth=5;
    cout << "Area = " <<area(r) <<endl;
    
    return 0;
}