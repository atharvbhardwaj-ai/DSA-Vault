#include<iostream>
using namespace std;

class Rectangle {
    private:

    int length;
    int breadth;

    public:

    Rectangle(){
        length = breadth = 1;  // Default Constructor (Initialising is a good practice to avoid Garbage Values)
    };
    
    Rectangle (int l, int b);  // Parameterised Constructor, Can Define Outside using Scope Resolution Operator
    
    // Facilitators: Functions which perform operations on Data Members of an Object
    int area(); 
    int perimeter();
    
    // Accessor
    int getLength() {
        return length;
    };
    
    // Mutator
    void setLength(int l) {
        length = l;
    };

    // Destructor: Used to clear any allocated memory in the class
    ~ Rectangle();
};

// Function Implementations
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

int Rectangle :: area(){
    return length * breadth;
}

int Rectangle :: perimeter(){
    return 2 * (length + breadth);
}

Rectangle :: ~ Rectangle(){
    // No Memory Required to Unallocate so leaving it Blank
}


int main(){
    Rectangle r(10, 5);
    cout << "Area = " << r.area() <<endl;
    cout << "Perimeter = " << r.perimeter() <<endl;

    cout << "Initial Length = " << r.getLength() <<endl;
    r.setLength(15);
    cout << "Updated Length = " << r.getLength();

    return 0;
}