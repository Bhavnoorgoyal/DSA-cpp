#include <iostream>
using namespace std;
#define SIZE 5
int q[SIZE], front=-1, rear=-1;
bool isEmpty(){ return front==-1; }
bool isFull(){ return (front==0 && rear==SIZE-1) || (rear+1==front); }
void enqueue(int x){
    if(isFull()){ cout<<"Queue full\n"; return; }
    if(front==-1) front=0;
    rear=(rear+1)%SIZE;
    q[rear]=x;
}
void dequeue(){
    if(isEmpty()){ cout<<"Queue empty\n"; return; }
    cout<<"Deleted: "<<q[front]<<"\n";
    if(front==rear) front=rear=-1;
    else front=(front+1)%SIZE;
}

void peek(){
    if(isEmpty()) cout<<"Empty\n";
    else cout<<"Front: "<<q[front]<<"\n";
}

void display(){
    if(isEmpty()){ cout<<"Empty\n"; return; }
    int i=front;
    while(true){
        cout<<q[i]<<" ";
        if(i==rear) break;
        i=(i+1)%SIZE;
    }
    cout<<"\n";
}

int main(){
    int ch,x;
    do{
        cout<<"\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit : ";
        cin>>ch;
        switch(ch){
            case 1: cin>>x; enqueue(x); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
        }
    }while(ch!=5);
}
