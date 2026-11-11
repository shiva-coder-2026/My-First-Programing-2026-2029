#include <iostream>
#include <stack>
using namespace std;

const int SIZE = 5;

// Display Stack
void display(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is Empty\n";
        return;
    }

    cout << "TOP -> ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

// Insert at specific position
void insertAtPosition(stack<int>& s, int value, int pos) {
    if (s.size() == SIZE) {
        cout << "Stack is Full!\n";
        return;
    }

    if (pos < 1 || pos > (int)s.size() + 1) {
        cout << "Invalid Position!\n";
        return;
    }

    stack<int> temp;

    // Move elements above the position
    int count = (int)s.size() - pos + 1;

    while (count--) {
        temp.push(s.top());
        s.pop();
    }

    // Insert new element
    s.push(value);

    // Restore elements
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    cout << "Element Inserted Successfully!\n";
}

// Delete at specific position
void deleteAtPosition(stack<int>& s, int pos) {
    if (s.empty()) {
        cout << "Stack is Empty!\n";
        return;
    }

    if (pos < 1 || pos > (int)s.size()) {
        cout << "Invalid Position!\n";
        return;
    }

    stack<int> temp;

    // Move elements above the position
    int count = (int)s.size() - pos;

    while (count--) {
        temp.push(s.top());
        s.pop();
    }

    // Delete target element
    cout << "Deleted Element: " << s.top() << endl;
    s.pop();

    // Restore elements
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> s;
    int choice, value, pos;

    // Initial elements
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Display\n";
        cout << "2. Insert at Position\n";
        cout << "3. Delete at Position\n";
        cout << "4. Check isEmpty\n";
        cout << "5. Check isFull\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                display(s);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                cout << "Enter position (1 = TOP): ";
                cin >> pos;
                insertAtPosition(s, value, pos);
                break;

            case 3:
                cout << "Enter position (1 = TOP): ";
                cin >> pos;
                deleteAtPosition(s, pos);
                break;

            case 4:
                cout << (s.empty() ? "Stack is Empty\n"
                                   : "Stack is Not Empty\n");
                break;

            case 5:
                cout << (s.size() == SIZE ? "Stack is Full\n"
                                          : "Stack is Not Full\n");
                break;

            case 6:
                cout << "Program Exited!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
