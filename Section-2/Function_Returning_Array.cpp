#include<iostream>
using namespace std;

int * newarr(int n){
    int *p;
    p = new int[n];
    p[0]=2; p[1]=3;p[2]=4;
    return p;
}

int main(){
    int *A;
    A=newarr(3);
    for(int i=0;i<3;i++){
        cout << A[i] <<" ";
    }
    return 0;
}