#include <iostream>
using namespace std;

// 2. RETURNING PHASE (Descending / Post-processing)
void fun2(int n) {
    if (n > 0) {
        fun2(n - 1);
        cout << n << " "; // Executes DURING function returns (coming UP)
    }

    cout << "\n";
}


int main() {
    int x = 3;
    fun2(x);

    return 0;
}
// Input: fun2(3)
// Output: 1 2 3