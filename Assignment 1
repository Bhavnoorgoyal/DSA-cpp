#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    cout << "Array : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int arr[], int &n, int position, int element){
    for(int i=n; i>position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    n++;
}

void del(int arr[], int &n, int position){
    for(int i=position; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

int linearSearch(int arr[], int n, int element){
    for(int i=0; i<n; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    cout <<"---MENU---"<< endl 
         <<"1.CREATE"<< endl 
         <<"2.DISPLAY"<< endl 
         <<"3.INSERT" << endl 
         <<"4.DELETE"<< endl 
         <<"5.LINEAR SEARCH"<< endl 
         <<"6.EXIT"<< endl; 

    int choice;
    cout << "Enter your choice as per the menu  : ";
    cin >> choice;

    int arr[100], n = 0;   // fixed: provide size

    if(choice >= 1 && choice <=5){
        cout << "Enter number of elements in array : ";
        cin >> n;
        cout << "Enter elements : " << endl;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << endl;
    }

    switch(choice){
        case 1:{
            cout << "Array created successfully!" << endl;
            break;
        }
        case 2:{
            display(arr, n);
            break;
        }
        case 3:{
            int position, element;
            cout << "Enter position to insert : ";
            cin >> position;
            cout << "Enter element to insert : ";
            cin >> element;
            insert(arr, n, position, element);
            display(arr, n);
            break;
        }
        case 4:{
            int position;
            cout << "Enter position to delete : ";
            cin >> position;
            del(arr, n, position);
            display(arr, n);
            break;
        }
        case 5:{
            int element;
            cout << "Enter element to search : ";
            cin >> element;
            int index = linearSearch(arr, n, element);
            if(index != -1){
                cout << "Element " << element << " found at index : " << index;
            }
            else{
                cout << "Element " << element << " not found";
            }
            cout << endl;
            break;
        }
        case 6:{
            cout << "Program exited successfully" << endl;
            break;
        }
        default:{
            cout << "Invalid input choice" << endl;
        }
    }
    return 0;
}
