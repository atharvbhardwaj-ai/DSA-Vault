#include<iostream>
using namespace std;

// 1. CALLING PHASE (Ascending / Pre-processing)
void fun1(int n) {
    if (n > 0) {
        cout << n << " "; // Executes DURING function calls (going DOWN)
        fun1(n - 1);
    }
    cout << "\n";
}

int main() {
    int x = 3;
    fun1(x);

    return 0;
}
// Input: fun1(3)
// Output: 3 2 1