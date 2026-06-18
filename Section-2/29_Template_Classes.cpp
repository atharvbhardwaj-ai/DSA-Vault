#include<iostream>
using namespace std;

// Template Classes are used in places where the same Class is useful for multiple data-types so to make them generic we use a Temporary Class

template <class T>
class Arithmetic {
    private:
    T a;
    T b;

    public:
    Arithmetic(T a, T b); // Parameterised Constructor

    T add();
    T sub();
};

template <class T>
Arithmetic<T> :: Arithmetic (T a, T b){
    this-> a = a; // "this->" is useful for Identifying Private variables
    this-> b = b;
}

template <class T>
T Arithmetic<T> :: add(){
    T c;
    c = a + b;
    return c; // Taking c to recognise variable initialisation of generic data-type
}

template <class T>
T Arithmetic<T> :: sub(){
    T c;
    c = a - b;
    return c;
}


int main(){
    Arithmetic<int> ar1(10,5);
    cout << ar1.add() <<endl;
    cout << ar1.sub() <<endl;

    Arithmetic<double> ar2(12.3, 7.2);
    cout << ar2.add() <<endl;

    return 0;
}