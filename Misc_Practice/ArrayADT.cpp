#include<iostream>
using namespace std;

// Generic Array ADT (Abstract Data-Type)
template <class T>
class MyArray {
    private:
    T* A;
    int size;
    int length;

    public:
    MyArray(int sz){
        A = new T[sz];
        size = sz;
        length = 0;
    }

    void append(T x);

    void display();

    ~ MyArray();
};

template <class T>
void MyArray<T> :: append(T x){
    if (length < size){
        A[length] = x;
        length ++;
    }
    else {
        cout << "Insertion Failed! Array at Max Capacity" <<endl;
    }
}

template <class T>
void MyArray<T> :: display(){
    for (int i = 0; i < length; i++){
        cout << A[i] << " ";
    }
}

template <class T>
MyArray<T> :: ~ MyArray(){
    delete []A;
}


int main(){
    MyArray<int> r1(50);
    int n;
    cout << "Enter no of elements in array ";
    cin >> n;

    if (n < 1 || n > 50) {
        cout << "Error: Elements must be between 1 and 50." << endl;
        return 1;
    }

    for (int i = 0; i < n; i ++){
        int current_value;
        cout <<"arr[" << i <<"] = ";
        cin >> current_value;
        r1.append(current_value);
    }

    cout << "The Array inputted is -" <<endl;
    r1.display();

    return 0;
}