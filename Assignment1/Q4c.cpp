#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter number of rows and columns : ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter elements : " << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> matrix[i][j];
        }
    }
    
    vector<vector<int>> transpose(cols, vector<int>(rows));
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    
    cout << "Transpose : " << endl;
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
