#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

//int main(){
    //struct Rectangle r={10,5};
    //cout << r.length <<" " << r.breadth <<endl;

    //struct Rectangle *p=&r ;
    //p->length=15;
    //p->breadth=10;
    //cout << p->length <<" " << p->breadth <<endl;
    
    //return 0;
//}

int main(){
    Rectangle *p;
    p=new Rectangle;
    p->length=10;p->breadth=15;
    
    cout << p->length <<endl << p->breadth <<endl;
    delete p;
    return 0;
}