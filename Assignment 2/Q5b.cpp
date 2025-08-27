#include <iostream>
using namespace std;

class TriDiagonal {
    int *arr;
    int n;
public:
    TriDiagonal(int size) {
        n = size;
        arr = new int[3*n - 2];
    }
    void set(int i, int j, int val) {
        if (i-j==1) arr[i-2] = val;              
        else if (i-j==0) arr[n-1+i-1] = val;     
        else if (i-j==-1) arr[2*n-1+i-1] = val;  
    }
    int get(int i, int j) {
        if (i-j==1) return arr[i-2];
        else if (i-j==0) return arr[n-1+i-1];
        else if (i-j==-1) return arr[2*n-1+i-1];
        else return 0;
    }
    void display() {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                cout<<get(i,j)<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    TriDiagonal td(4);
    td.set(1,1,1); td.set(1,2,2);
    td.set(2,1,3); td.set(2,2,4); td.set(2,3,5);
    td.set(3,2,6); td.set(3,3,7); td.set(3,4,8);
    td.set(4,3,9); td.set(4,4,10);
    td.display();
    return 0;
}
