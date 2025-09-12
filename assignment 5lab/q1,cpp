#include <iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    node(int x) {
        data=x;
        next=NULL;
    }
};

class linkedlist{
    node*head;
public:
    linkedlist() {
        head=NULL;
    }

    void insertstart(int x) {
        node*newnode=new node(x);
        newnode->next=head;
        head=newnode;
    }

    void insertend(int x) {
        node*newnode=new node(x);
        if (head==NULL) {
            head=newnode;
        }
        node*temp=head;
        while (temp->next!=NULL) temp=temp->next;
        temp->next=newnode;
    }

    void insertaftr(int key, int x) {
        node*temp=head;
        while (temp!=NULL && temp->data!=key) temp=temp->next;
        if (temp== NULL) {
            cout << "node not found"<<endl;
            return;
        }
        node*newnode=new node(x);
        newnode->next=temp->next;
        temp->next=newnode;
    }

    void insertbfr(int key, int x) {
        if (head==NULL) return;
        if (head->data==key) {
            insertstart(x);
            return;
        }
        node*temp=head;
        while (temp->next!=NULL && temp->next->data!=key){ 
            temp=temp->next;
        }
        if (temp->next==NULL) {
            cout << "node not found"<<endl;
            return;
        }
        node*newnode=new node(x);
        newnode->next=temp->next;
        temp->next=newnode;
    }

    void deletestart() {
        if (head==NULL) return;
        node*temp=head;
        head=head->next;
        delete temp;
    }

    void deleteend() {
        if (head==NULL) return;
        if (head->next==NULL) {
            delete head;
            head=NULL;
            return;
        }
        node*temp=head;
        while (temp->next->next!=NULL) temp=temp->next;
        delete temp->next;
        temp->next=NULL;
    }

    void deletenode(int key) {
        if (head==NULL) return;
        if (head->data==key) {
            node*temp=head;
            head=head->next;
            delete temp;
            return;
        }
        node*temp=head;
        while (temp->next!=NULL && temp->next->data!=key) temp=temp->next;
        if (temp->next==NULL) {
            cout << "node not found";
            return;
        }
        node*del=temp->next;
        temp->next=del->next;
        delete del;
    }

    void searchnode(int key) {
        node*temp=head;
        int pos=1;
        while (temp!=NULL) {
            if (temp->data==key) {
                cout << "found at position - " << pos << endl;
                return;
            }
            temp=temp->next;
            pos++;
        }
        cout << "not found"<<endl;
    }

    void display() {
        node*temp=head;
        while (temp!=NULL) {
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};

int main() {
    linkedlist list;
    int choice, x, key;
    do {
        cout << "____ Menu ____"<<endl;
        cout << "1. Insert at beginning"<<endl;
        cout << "2. Insert at end"<<endl;
        cout << "3. Insert after a node"<<endl;
        cout << "4. Insert before a node"<<endl;
        cout << "5. Delete from beginning"<<endl;
        cout << "6. Delete from end"<<endl;
        cout << "7. Delete specific node"<<endl;
        cout << "8. Search node"<<endl;
        cout << "9. Display list"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
            cout << "Enter valuue: "; 
            cin >> x; 
            list.insertstart(x); 
            break;
            case 2: 
            cout << "Enter value: "; 
            cin >> x; 
            list.insertend(x); 
            break;
            case 3: 
            cout << "After which node? "; 
            cin >> key; 
            cout << "Enter value: "; 
            cin >> x; 
            list.insertaftr(key,x); 
            break;
            case 4: 
            cout << "Before which node? "; 
            cin >> key; 
            cout << "Enter value: "; 
            cin >> x; 
            list.insertbfr(key,x); 
            break;
            case 5: 
            list.deletestart(); 
            break;
            case 6: 
            list.deleteend(); 
            break;
            case 7: 
            cout << "Delete which node? "; 
            cin >> key; 
            list.deletenode(key); 
            break;
            case 8: 
            cout << "Search value: "; 
            cin >> key; 
            list.searchnode(key); 
            break;
            case 9: 
            list.display(); 
            break;
        }
    } 
    while (choice!=0);
    return 0;
}
