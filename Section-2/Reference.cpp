#include <iostream>
using namespace std;

int main(){
    int a=10;
    int &r=a;
    //a=25;
    r=25;
    cout << a <<endl << r <<endl;
}