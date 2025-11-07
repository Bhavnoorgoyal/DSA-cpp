#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};
int sizeDoubly(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {
    Node* head = new Node{10, NULL, NULL};
    Node* second = new Node{20, NULL, head};
    head->next = second;
    Node* third = new Node{30, NULL, second};
    second->next = third;
  cout << "Size of Doubly Linked List: " << sizeDoubly(head) << endl;
    return 0;
}
