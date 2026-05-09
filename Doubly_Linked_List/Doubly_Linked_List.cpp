#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;
    node* prev;

    node(){
        next = NULL;
        prev = NULL;
    }
};

node* head = NULL;
node* tail = NULL;

void createDLL(){
    if(head != NULL){
        cout << "List already created\n";
        return;
    }

    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;

    head = tail = newNode;
}

void insertAtHead(){
    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;

    if(head == NULL){
        head = tail = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(){
    if(head == NULL){
        cout << "List not created. Use Create first.\n";
        return;
    }

    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAfterPosition(){
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    node* temp = head;
    for(int i = 1; i < pos && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Invalid position\n";
        return;
    }

    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL){
        temp->next->prev = newNode;
    }

    temp->next = newNode;

    if(newNode->next == NULL){
        tail = newNode;
    }
}

void insertBeforePosition(){
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    if(pos == 1){
        insertAtHead();
        return;
    }

    node* temp = head;
    for(int i = 1; i < pos && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Invalid position\n";
        return;
    }

    node* newNode = new node();
    cout << "Enter value: ";
    cin >> newNode->value;

    newNode->next = temp;
    newNode->prev = temp->prev;

    temp->prev->next = newNode;
    temp->prev = newNode;
}

void delHead(){
    if(head == NULL){
        return;
    }

    node* temp = head;
    head = head->next;

    if(head != NULL){
        head->prev = NULL;
    }
    else{
        tail = NULL;
    }

    delete temp;
}

void delTail(){
    if(tail == NULL){
        return;
    }

    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }

    node* temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
}

void delByPosition(){
    int pos;
    cout << "Enter position: ";
    cin >> pos;

    if(pos == 1){
        delHead();
        return;
    }

    node* temp = head;
    for(int i = 1; i < pos && temp != NULL; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Invalid position\n";
        return;
    }

    if(temp == tail){
        delTail();
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}

void delByValue(){
    int val;
    cout << "Enter value: ";
    cin >> val;

    if(head == NULL){
        return;
    }

    node* temp = head;
    while(temp != NULL && temp->value != val){
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Value not found\n";
        return;
    }

    if(temp == head){
        delHead();
        return;
    }

    if(temp == tail){
        delTail();
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}

void sortList(){
    for(node* i = head; i != NULL; i = i->next){
        for(node* j = i->next; j != NULL; j = j->next){
            if(i->value > j->value){
                swap(i->value, j->value);
            }
        }
    }
}

void headToTail(){
    if(head == NULL || head->next == NULL){
        return;
    }

    node* temp = head;
    head = head->next;
    head->prev = NULL;

    tail->next = temp;
    temp->prev = tail;
    temp->next = NULL;
    tail = temp;
}

void tailToHead(){
    if(head == NULL || head == tail){
        return;
    }

    node* temp = tail;
    tail = tail->prev;
    tail->next = NULL;

    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void swapNodes(){
    int x, y;
    cout << "Enter two values: ";
    cin >> x >> y;

    node* a = head;
    node* b = head;

    while(a && a->value != x){
        a = a->next;
    }

    while(b && b->value != y){
        b = b->next;
    }

    if(a && b){
        swap(a->value, b->value);
    }
}

void display(){
    node* temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseList(){
    if(head == NULL || head->next == NULL){
        return;
    }

    node* current = head;
    node* temp = NULL;

    while(current != NULL){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    temp = head;
    head = tail;
    tail = temp;
}

void menu(int choice){
    if(choice == 1){
        createDLL();
    }
    else if(choice == 2){
        insertAtHead();
    }
    else if(choice == 3){
        insertAtTail();
    }
    else if(choice == 4){
        insertAfterPosition();
    }
    else if(choice == 5){
        insertBeforePosition();
    }
    else if(choice == 6){
        delHead();
    }
    else if(choice == 7){
        delTail();
    }
    else if(choice == 8){
        delByPosition();
    }
    else if(choice == 9){
        delByValue();
    }
    else if(choice == 10){
        sortList();
    }
    else if(choice == 11){
        headToTail();
    }
    else if(choice == 12){
        tailToHead();
    }
    else if(choice == 13){
        swapNodes();
    }
    else if(choice == 14){
        display();
    }
    else if(choice == 15){
        reverseList();
    }
}

int main(){
    int choice;
    do{
        cout << "\n1.Create Doubly LinkList\n2.Insert at Head\n3.Insert at Tail\n4.Insert node after position\n5.Insert node before position\n6.Delete Head\n7.Delete Tail\n8.Delete by position\n9.Delete by value\n10.Sort Doubly LinkList\n11.Change Head to Tail\n12.Change Tail to Head\n13.Swap Doubly LinkList values\n14.Display Doubly LinkList\n15.Reverse Doubly LinkList\n0.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        menu(choice);
    }while(choice != 0);

    return 0;
}
