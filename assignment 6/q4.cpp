#include <iostream>
using namespace std;
struct Node {
    char data;
    Node* next;
    Node* prev;
};
bool isPalindrome(Node* head) {
    if (head == NULL) return true;

    Node* tail = head;
    while (tail->next != NULL)
        tail = tail->next;

    while (head != tail && tail->next != head) {
        if (head->data != tail->data)
            return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
    Node* n1 = new Node{'A', NULL, NULL};
    Node* n2 = new Node{'B', NULL, n1};
    n1->next = n2;
    Node* n3 = new Node{'C', NULL, n2};
    n2->next = n3;
    Node* n4 = new Node{'B', NULL, n3};
    n3->next = n4;
    Node* n5 = new Node{'A', NULL, n4};
    n4->next = n5;
  if (isPalindrome(n1))
        cout << "Palindrome Linked List" << endl;
    else
        cout << "Not a Palindrome Linked List" << endl;

    return 0;
}
