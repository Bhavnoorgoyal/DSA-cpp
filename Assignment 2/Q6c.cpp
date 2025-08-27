#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    Element A[3] = {{0,0,2},{0,1,3},{1,0,4}};
    Element B[3] = {{0,0,5},{1,0,6},{1,1,7}};
    int sizeA=3, sizeB=3;

    Element C[10]; int k=0;

    for(int i=0;i<sizeA;i++) {
        for(int j=0;j<sizeB;j++) {
            if(A[i].col == B[j].row) {
                bool found=false;
                for(int x=0;x<k;x++) {
                    if(C[x].row==A[i].row && C[x].col==B[j].col) {
                        C[x].val += A[i].val * B[j].val;
                        found=true; break;
                    }
                }
                if(!found) {
                    C[k].row=A[i].row;
                    C[k].col=B[j].col;
                    C[k].val=A[i].val * B[j].val;
                    k++;
                }
            }
        }
    }

    cout<<"Multiplication Result:\n";
    for(int i=0;i<k;i++)
        cout<<C[i].row<<" "<<C[i].col<<" "<<C[i].val<<endl;
    return 0;
}
