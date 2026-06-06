#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialise(Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area (Rectangle r){
    return r.length * r.breadth;
}

int perimeter(Rectangle r){
    return (2*(r.length + r.breadth));
}

int main(){
    Rectangle r1 = {0,0};
    int l=0, b=0;
    cout << "Enter length and breadth of rectangle ";
    cin >> l >> b;
    
    initialise(&r1,l,b);

    int a = area(r1);
    int peri = perimeter(r1);
    
    cout << "Area of Rectangle = " << a <<endl << "Perimeter of Rectangle = " <<peri <<endl;
    
    return 0;
}