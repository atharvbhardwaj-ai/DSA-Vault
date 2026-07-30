#include<iostream>
using namespace std;

int main() {
    int nums[50], numsSize, res[50];

    cout << "Enter no of elements ";
    cin >> numsSize;

    cout << "Enter array elements ";
    for(int i = 0; i < numsSize; i ++) {
        cin >> nums[i];
    }

    int left_product = 1, right_product = 1;

    for (int i = 0; i < numsSize; i ++) {
        res[i] = left_product;
        left_product *= nums[i];
    }

    for (int i = numsSize - 1; i >= 0; i --) {
        res[i] *= right_product;
        right_product *= nums[i];
    }

    cout << "Updated Array-\n";
    for (int i = 0; i < numsSize; i ++) {
        cout << res[i] << "\n";
    }

    return 0;
}