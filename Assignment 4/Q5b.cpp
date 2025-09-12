#include <iostream>
#include <queue>
using namespace std;
class Stack1Q {
    queue<int> q;
public:
    void push(int x){
        q.push(x);
        for(int i=0; i<(int)q.size()-1; i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        if(q.empty()) { cout<<"Empty\n"; return; }
        q.pop();
    }
    int top(){
        if(q.empty()) return -1;
        return q.front();
    }
    bool empty(){ return q.empty(); }
};
int main(){
    Stack1Q st;
    st.push(5); st.push(15);
    cout<<st.top()<<"\n"; 
    st.pop();
    cout<<st.top()<<"\n"; 
}
