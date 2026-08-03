#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node *next;

    Node() {
        value = 0;
        next = nullptr;
    }
};

Node nodes[100];
Node *avail = nodes;
Node *first = nullptr;

bool isFull() {
    return avail >= nodes + 100;
}

void createList() {
    if (isFull()) {
        cout << "Memory Full!\n";
        return;
    }

    Node *ptr = avail++;
    cout << "Enter first node value: ";
    cin >> ptr->value;
    ptr->next = nullptr;
    first = ptr;

    int ch;
    cout << "Add more nodes? (1/0): ";
    cin >> ch;

    while (ch == 1) {
        if (isFull()) {
            cout << "Memory Full!\n";
            return;
        }

        Node *cpt = avail++;

        cout << "Enter value: ";
        cin >> cpt->value;
        cpt->next = nullptr;

        ptr->next = cpt;
        ptr = cpt;

        cout << "Add more nodes? (1/0): ";
        cin >> ch;
    }
}

void display() {
    if (first == nullptr) {
        cout << "List is Empty\n";
        return;
    }

    Node *temp = first;

    while (temp != nullptr) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void insertAtPosition(int value, int position) {
    if (position < 0) {
        cout << "Invalid Position\n";
        return;
    }

    if (isFull()) {
        cout << "Memory Full!\n";
        return;
    }

    if (position == 0) {
        Node *newNode = avail++;
        newNode->value = value;
        newNode->next = first;
        first = newNode;
        return;
    }

    Node *temp = first;

    for (int i = 0; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Invalid Position\n";
        return;
    }

    Node *newNode = avail++;
    newNode->value = value;

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(int value) {
    if (first == nullptr) {
        cout << "List is Empty\n";
        return;
    }

    Node *temp = first;
    Node *prev = nullptr;

    while (temp != nullptr && temp->value != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Value not found.\n";
        return;
    }

    if (prev == nullptr)
        first = temp->next;
    else
        prev->next = temp->next;

    temp->next = nullptr;

    cout << value << " deleted.\n";
}

int main() {
    createList();

    cout << "\nOriginal Linked List:\n";
    display();

    int value, position;

    cout << "\nEnter value to insert: ";
    cin >> value;

    cout << "Enter position: ";
    cin >> position;

    insertAtPosition(value, position);

    cout << "\nAfter Insertion:\n";
    display();

    cout << "\nEnter value to delete: ";
    cin >> value;

    deleteNode(value);

    cout << "\nAfter Deletion:\n";
    display();

    return 0;
}
