#include<iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;
    
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i ++;
        } else {
            temp.push_back(arr[j]);
            j ++;
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i]);
        i ++;
    }
    while(j <= end) {
        temp.push_back(arr[j]);
        j ++;
    }
    for (int idx = 0; idx < temp.size(); idx ++) {
        arr[start + idx] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main() {
    vector<int> arr = {26, 32, 36, 33, 22};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array-\n";
    for (int i = 0; i < n; i ++) {
        cout << arr[i] << " ";
    }

    return 0;
}