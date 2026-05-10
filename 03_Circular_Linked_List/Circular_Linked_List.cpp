#include <iostream>
#include <cstdlib>
using namespace std;

class node {
public:
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

void createCLL() {
    if (head != NULL) {
        cout << "List already created\n";
        return;
    }
    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;
    head = tail = newNode;
    // Make it circular by pointing tail's next to head
    newNode->next = head;
}

void insertAtHead() {
    if (head == NULL) {
        createCLL();
        return;
    }
    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;
    newNode->next = head;
    head = newNode;
    // Maintain circular structure
    tail->next = head;
}

void insertAtTail() {
    if (head == NULL) {
        cout << "List not created. Use Create first.\n";
        return;
    }
    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;
    tail->next = newNode;
    tail = newNode;
    // Maintain circular structure
    tail->next = head;
}

void insertAfterPosition() {
    if (head == NULL) return;
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    node* temp = head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
        if (temp == head) { 
            cout << "Invalid position\n";
            return;
        }
    }

    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;
    newNode->next = temp->next;
    temp->next = newNode;

    if (temp == tail) {
        tail = newNode;
    }
}

void insertBeforePosition() {
    if (head == NULL) return;
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    if (pos == 1) {
        insertAtHead();
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == head || temp == tail) {
            cout << "Invalid position\n";
            return;
        }
    }

    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;
    newNode->next = temp->next;
    temp->next = newNode;
}

void delHead() {
    if (head == NULL) return;
  
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    }

    node* temp = head;
    head = head->next;
    tail->next = head; 
    delete temp;
}

void delTail() {
    if (head == NULL) return;

    if (head == tail) {
        delHead();
        return;
    }

    node* temp = head;
    // Traverse to the second to last node
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = head; 
}

void delByPosition() {
    if (head == NULL) return;
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    if (pos == 1) {
        delHead();
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == tail) { 
            cout << "Invalid position\n";
            return;
        }
    }

    node* toDelete = temp->next;
    if (toDelete == head) { 
        cout << "Invalid position\n";
        return;
    }

    temp->next = toDelete->next;

    if (toDelete == tail) {
        tail = temp;
    }
    delete toDelete;
}

void delByValue() {
    if (head == NULL) return;

    int val;
    cout << "Enter value: ";
    cin >> val;

    if (head->value == val) {
        delHead();
        return;
    }

    node* temp = head;
    while (temp->next != head && temp->next->value != val) {
        temp = temp->next;
    }

    if (temp->next == head) {
        return; 
    }

    node* toDelete = temp->next;
    temp->next = toDelete->next;

    if (toDelete == tail) {
        tail = temp;
    }
    delete toDelete;
}

void sortList() {
    if (head == NULL || head->next == head) {
        return;
    }

    for (node* i = head; i->next != head; i = i->next) {

        for (node* j = i->next; j != head; j = j->next) {

            if (i->value > j->value) {
                swap(i->value, j->value);
            }
        }
    }
}

void headToTail() {
    if (head == NULL || head == tail) return;
  
    head = head->next;
    tail = tail->next;
}

void tailToHead() {
    if (head == NULL || head == tail) return;

    node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    head = tail;
    tail = temp;
}

void swapNodes() {
    if (head == NULL) return;

    int x, y;
    cout << "Enter two values: ";
    cin >> x >> y;

    node* a = NULL;
    node* b = NULL;
    node* temp = head;

    do {
        if (temp->value == x) a = temp;
        if (temp->value == y) b = temp;
        temp = temp->next;
    } while (temp != head);

    if (a && b) {
        swap(a->value, b->value);
    }
    else {
        cout << "One or both values not found.\n";
    }
}

void display() {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    node* temp = head;
    do {
        cout << temp->value << " ";
        temp = temp->next;
    } while (temp != head); 
    cout << endl;
}

void reverseList() {
    if (head == NULL || head == tail) return;

    node* prev = tail;
    node* current = head;
    node* nextNode = NULL;

    do {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    } while (current != head);

    tail = head;
    head = prev;
}

void menu(int choice) {
    if (choice == 1) createCLL();
    else if (choice == 2) insertAtHead();
    else if (choice == 3) insertAtTail();
    else if (choice == 4) insertAfterPosition();
    else if (choice == 5) insertBeforePosition();
    else if (choice == 6) delHead();
    else if (choice == 7) delTail();
    else if (choice == 8) delByPosition();
    else if (choice == 9) delByValue();
    else if (choice == 10) sortList();
    else if (choice == 11) headToTail();
    else if (choice == 12) tailToHead();
    else if (choice == 13) swapNodes();
    else if (choice == 14) display();
    else if (choice == 15) reverseList();
}

int main() {
    int choice;
    do {
        cout << "\n1.Create Circular LinkList\n2.Insert at Head\n3.Insert at Tail\n4.Insert node after position\n5.Insert node before position\n6.Delete Head\n7.Delete Tail\n8.Delete by position\n9.Delete by value\n10.Sort Circular LinkList\n11.Change Head to Tail\n12.Change Tail to Head\n13.Swap Circular LinkList values\n14.Display Circular LinkList\n15.Reverse Circular LinkList\n0.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        menu(choice);
    } while (choice != 0);
    return 0;
}
