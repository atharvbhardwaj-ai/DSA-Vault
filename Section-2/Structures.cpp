#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};//r1;

int main(){
    struct Rectangle r1[3];
    for(int i=0;i<3;i++){
        cout << "Enter length and breadth of Rectangle ";
        cin >> r1[i].length >> r1[i].breadth;
        cout << endl;
    }
    cout << "Length and Breadth of First Rectangle is " << r1[0].length << " " << r1[0].breadth << endl;
    return 0;
}