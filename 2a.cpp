#include <iostream>
using namespace std;

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] < arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main() {
    int array[] = {12, 6, 3, 60, 55, 64, 45, 3, 33, 6, 2, 4, 18, 70};
    int N = sizeof(array) / sizeof(array[0]);

    bubbleSortDescending(array, N);

    // Print sorted array
    for (int i = 0; i < N; i++) {
        cout << array[i] << (i < N-1 ? ", " : "");
    }

    return 0;
}
