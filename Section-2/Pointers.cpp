#include <iostream>
using namespace std;

int main(){
    int *p;
    p = new int[5]; // C++ Syntax for malloc (Used to store array in heap memory) (int *)malloc(5*sizeof(int))
    p[0]=2; p[1]=4; p[2]=6 ; p[3]=8; p[4]=10;
    for(int i=0;i<5;i++){
        cout << p[i] <<endl;
    }
    delete [] p; //delete p; for non-array pointer, free(p) in C Language
    return 0;
}