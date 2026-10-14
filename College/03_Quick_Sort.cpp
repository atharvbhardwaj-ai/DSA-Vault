#include <iostream>
#include <vector>
using namespace std;

int partition (vector<int> &arr, int st, int end) {
    int pivot = arr[end];

    int idx = st - 1;
    for (int j = st; j < end; j ++) {
        if(arr[j] < pivot) {
            idx ++;
            swap(arr[idx], arr[j]);
        }
    }
    swap(arr[idx + 1], arr[end]);
    return idx + 1;
}

void quickSort (vector<int> &arr, int st, int end) {
    if (st < end) {
        int pivot = partition(arr, st, end);

        quickSort(arr, st, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}

int main() {
    vector<int> arr = {10, 8, 7, 6, 12, 3, 6};
    
    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array-\n";
    for(int i = 0; i < arr.size(); i ++) {
        cout << arr[i] <<" ";
    }

    return 0;
}