#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    Element A[3] = {{0,0,5},{0,2,8},{1,1,3}};
    Element B[3] = {{0,1,6},{1,1,7},{2,0,4}};
    int m=3, n=3, sizeA=3, sizeB=3;

    Element C[10]; int k=0;

    int i=0, j=0;
    while(i<sizeA && j<sizeB) {
        if(A[i].row < B[j].row || (A[i].row==B[j].row && A[i].col < B[j].col))
            C[k++] = A[i++];
        else if(B[j].row < A[i].row || (B[j].row==A[i].row && B[j].col < A[i].col))
            C[k++] = B[j++];
        else {
            C[k] = A[i];
            C[k++].val = A[i++].val + B[j++].val;
        }
    }
    while(i<sizeA) C[k++] = A[i++];
    while(j<sizeB) C[k++] = B[j++];

    cout<<"Addition Result:\n";
    for(int p=0;p<k;p++)
        cout<<C[p].row<<" "<<C[p].col<<" "<<C[p].val<<endl;

    return 0;
}
