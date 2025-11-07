#include <iostream>
using namespace std;
// i have done 3 sort questions in this part a, b , c which is insertion sort, bubble sort and selection sort 

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[50];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nOriginal Array: ";
    display(arr, n);

    int choice;
    cout << "\nChoose Sorting Technique:\n";
    cout << "1. Selection Sort\n2. Insertion Sort\n3. Bubble Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            selectionSort(arr, n);
            cout << "\nArray after Selection Sort: ";
            display(arr, n);
            break;
        case 2:
            insertionSort(arr, n);
            cout << "\nArray after Insertion Sort: ";
            display(arr, n);
            break;
        case 3:
            bubbleSort(arr, n);
            cout << "\nArray after Bubble Sort: ";
            display(arr, n);
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
