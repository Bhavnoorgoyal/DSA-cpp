#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice, val;

    do {
        cout << "\n=== Simple queue Menu ===\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek (Front)\n";
        cout << "4. isEmpty\n";
        cout << "5. Size\n";
        cout << "6. Display\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> val;
                q.push(val);
                cout << val << " enqueued.\n";
                break;
            case 2:
                if (!q.empty()) {
                    cout << q.front() << " dequeued.\n";
                    q.pop();
                } else {
                    cout << "queue is empty!\n";
                }
                break;
            case 3:
                if (!q.empty())
                    cout << "Front: " << q.front() << endl;
                else
                    cout << "queue is empty!\n";
                break;
            case 4:
                cout << (q.empty() ? "queue is empty\n" : "queue is not empty\n");
                break;
            case 5:
                cout << "Size: " << q.size() << endl;
                break;
            case 6:
                if (q.empty()) {
                    cout << "queue is empty!\n";
                } else {
                    cout << "queue elements: ";
                    queue<int> temp = q;
                    while (!temp.empty()) {
                        cout << temp.front() << " ";
                        temp.pop();
                    }
                    cout << endl;
                }
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}


