#include <iostream>
using namespace std;

int main() {
    int array[] = {12, 6, 3, 60, 55, 64, 45, 3, 33, 6, 2, 4, 18, 70};
    int N = sizeof(array) / sizeof(array[0]);

    // Update last value to 72
    array[N-1] = 72;

    // Print array in reverse
    for (int i = N-1; i >= 0; i--) {
        cout << array[i] << (i > 0 ? ", " : "");
    }

    return 0;
}
