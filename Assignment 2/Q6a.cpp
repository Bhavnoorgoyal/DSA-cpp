#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int m=3, n=3; 
    Element A[4] = {{0,0,5},{0,2,8},{1,1,3},{2,0,6}}; 
    int size = 4;

    cout << "Transpose of Sparse Matrix:\n";
    for(int i=0; i<size; i++) {
        cout << A[i].col << " " << A[i].row << " " << A[i].val << endl;
    }
    return 0;
}
