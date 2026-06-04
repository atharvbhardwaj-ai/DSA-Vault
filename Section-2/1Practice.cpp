#include<iostream>
using namespace std;

int * createInventory (int size){
    int *p;
    p = new int[size];
    for(int i=0;i<size;i++){
        p[i]=(i+1)*5;
    }
    return p;
}

int main(){
    int n;
    cout << "Enter size ";
    cin >> n;
    int *ptr = createInventory(n);
    cout <<"The inventory is " <<endl;
    for(int i=0;i<n;i++){
        cout << ptr[i] <<endl;
    }
    delete [] ptr;
    return 0;
}