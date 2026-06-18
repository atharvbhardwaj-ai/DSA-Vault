#include<iostream>
using namespace std;


// In C++, class and a structure are identical i.e. you can include functions withing a structure as well like a class
// However the difference is that in class by default everything is private whereas in structure everything is public by default

class Rectangle{
    public:

    int length;
    int breadth;

    void initialise(int l, int b){
        length=l;
        breadth=b;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2 * (length + breadth);
    }
};

int main(){
    Rectangle r;
    int length, breadth;
    cout << "Enter length and breadth of rectangle ";
    cin >> length >> breadth;

    r.initialise(length,breadth);
    int a = r.area();
    int p = r.perimeter();

    cout << "Area of Rectangle = " <<a <<endl << "Perimeter of Rectangle = " << p <<endl;

    return 0;
}