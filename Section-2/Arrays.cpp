#include <iostream>
using namespace std;

int main(){
    int arr[3];
    int i;
    for(i=0;i<3;i++){
        cout << "Enter arr[" << i << "] ";
        cin >> arr[i];
    }

    cout << "The array is \n";

    for ( i = 0 ; i < 3 ; i ++ ){
        cout << arr[i] << " ";
    }

    return 0;
}