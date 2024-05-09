#include <iostream>
#include <algorithm>  // For sort function
using namespace std;

int binarySearch(char arr[], int l, int r, char x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    char charArray[] = {'a', 'b', 'c', 'f', 'g', 'H', 'j', 'n', 'q', 'r', 't', 'v', 'x'};
    int N = sizeof(charArray) / sizeof(charArray[0]);
    char target = 'H';

    // Sort array if not sorted
    sort(charArray, charArray + N);

    int result = binarySearch(charArray, 0, N-1, target);
    if(result != -1)
        cout << "Target element '" << target << "' is found at the index: " << result;
    else
        cout << "Element not present in array.";

    return 0;
}
