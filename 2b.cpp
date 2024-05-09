#include <iostream>
using namespace std;

void selectionSortAscending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int array[] = {12, 6, 3, 60, 55, 64, 45, 3, 33, 6, 2, 4, 18, 70};
    int N = sizeof(array) / sizeof(array[0]);

    selectionSortAscending(array, N);

    // Print sorted array
    for (int i = 0; i < N; i++) {
        cout << array[i] << (i < N-1 ? ", " : "");
    }

    return 0;
}
