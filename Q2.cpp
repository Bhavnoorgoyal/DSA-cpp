#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int &n){
    sort(arr, arr+n);  // sort array first
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    n = i+1;  // update size after removing duplicates
}

int main(){
    int n;
    cout << "Enter number of elements in array : ";
    cin >> n;
    int arr[100];   // minimal change: fixed size to avoid VLA issues
    cout << "Enter array elements : ";
    for(int i=0; i<n; i++) cin >> arr[i];

    removeDuplicates(arr, n);

    cout << "Updated array with unique elements : ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
