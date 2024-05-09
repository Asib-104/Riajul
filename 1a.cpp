#include <iostream>
using namespace std;

int main() {
    int array[15] = {12, 6, 3, 60, 64, 45, 3, 33, 6, 2, 4, 18, 70};
    int N = sizeof(array) / sizeof(array[0]);

    // Inserting 55 at the 4th index
    for (int i = N; i > 4; --i) {
        array[i] = array[i-1];
    }
    array[4] = 55;
    N++;  // Increase array size after insertion

    // Print updated array
    for (int i = 0; i < N; i++) {
        cout << array[i] << (i < N-1 ? ", " : "");
    }

    return 0;
}
