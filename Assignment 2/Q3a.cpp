#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing number is " << findMissingLinear(arr, n);
    return 0;
}
