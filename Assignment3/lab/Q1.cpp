#include <iostream>
#include <stack>
using namespace std;
#define SIZE 5
int main() {
    stack<int> s;
    int choice;
    int value;
    do {
        cout << " --- Stack Menu ---"<<endl;
        cout << " 1. Push\n 2. Pop\n 3. Peek\n 4. Display\n 5. Check Empty\n 6. Check Full\n 7. Exit\n ";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: 
            if (s.size() == SIZE) {
                cout << "Stack Overflow! (Full) "<<endl;
            } 
            else {
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                cout << value << " pushed into stack "<<endl;
            }
            break;

        case 2: 
            if (s.empty()) {
                cout << "Stack Underflow! (Empty)"<<endl;
            } else {
                cout << s.top() << " popped from stack."<<endl;
                s.pop();
            }
            break;

        case 3: 
            if (s.empty()) {
                cout << "Stack is Empty!"<<endl;
            } else {
                cout << "Top element: " << s.top() << endl;
            }
            break;

        case 4: 
            if (s.empty()) {
                cout << "Stack is Empty!"<<endl;
            } else {
                cout << "Stack elements: ";
                stack<int> temp = s;
                while (!temp.empty()) {
                    cout << temp.top() << " ";
                    temp.pop();
                }
                cout << endl;
            }
            break;

        case 5: 
            if (s.empty()){ 
                cout << "Stack is Empty!"<<endl;
            }
            else {
                cout << "Stack is not Empty!"<<endl;
            }
            break;

        case 6:
            if (s.size() == SIZE) cout << "Stack is Full!"<<endl;
            else cout << "Stack is not Full!"<<endl;
            break;

        case 7:
            cout << "Exiting..."<<endl;
            break;
        default:
            cout << "Invalid choice!"<<endl;
        }
    } while (choice != 7);
    return 0;
}
