#include<iostream>
#include <cstdlib>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int v){
        val = v;
        next = NULL;
    }
};

class Sll{
    Node* Head;
    Node* Tail;
public:

    Sll(){
        Head=Tail = NULL;
    }

    void InsertAtHead(){
        int val;
        cout<<"Enter Value: ";
        cin>>val;
        Node* newnode = new Node(val);

        if(Head == NULL){
            Head=Tail = newnode;
        }
        else{
            newnode->next = Head;
            Head = newnode;
        }
    }

    void InsertAtTail(){
        int val;
        cout<<"Enter Value: ";
        cin>>val;
        Node*newnode=new Node(val);
        if(Head==NULL){
            Head=Tail=newnode;
        }else{
            Tail->next=newnode;
            Tail=newnode;
        }
    }

    void InsertAfterPosition(){
        int val;
        cout<<"Enter Value: ";
        cin>>val;
        int pos;
        cout<<"Enter Position: ";
        cin>>pos;
        Node*temp=Head;
        for(int i=1; i<pos&&temp!=NULL; i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"Invalid Position\n";
            return;
        }
        Node*newnode=new Node(val);
        newnode->next=temp->next;
        temp->next=newnode;

        if(newnode->next==NULL){
            Tail=newnode;
        }
    }

    void InsertBeforePosition(){
        int val;
        cout<<"Enter Value: ";
        cin>>val;
        int pos;
        cout<<"Enter Position: ";
        cin>>pos;
        Node* temp=Head;
        for(int i=1; i<pos-1&&temp!=NULL; i++){
            temp=temp->next;
        }
        if(temp==NULL||temp->next==NULL){
            cout<<"Invald Position"<<endl;
            return;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }

    void delHead(){
        if(Head==NULL){
            cout<<"Linklist is Empty";
            return;
        }
        Node*Temp=Head;
        Head=Temp->next;
        if(Head==NULL){
            Tail=NULL;
        }
        
        delete Temp;
    }

    void delTail(){
        if(Tail==NULL){
            cout<<"Linklist is Empty";
            return;
        }
        if(Head==Tail){
            delete Head;
            Head=Tail=NULL;
        }
        Node*temp=Head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete Tail;
        Tail=temp;
    }

    void delByPosition(){
        int pos;
        cout<<"Enter Position";
        cin>>pos;
        if(pos==1){
            Node* temp=Head;
            Head=Head->next;
            delete temp;
        }
        Node* temp=Head;
        for(int i=1; i<pos-1&&temp!=NULL; i++){
            temp=temp->next;
        }
        if(temp==NULL||temp->next==NULL){
            cout<<"Invald Position"<<endl;
            return;
        }
        Node*todel=temp->next;
        temp->next=todel->next;

        if(todel==Tail){
            Tail=temp;
        }
        delete todel;
    }

    void delbyvalue(){
        int value;
        cout<<"Enter Value:";
        cin>>value;
        if(value==Head->val){
            Node* temp=Head;
            Head=Head->next;
            delete temp;
        }
        Node* temp=Head;
        while(temp->next!=NULL&&temp->next->val!=value){
            temp=temp->next;
        }
        if(temp->next==NULL){
            cout<<"Value Not Fount"<<endl;
        }
        Node* del=temp->next;
        temp->next=del->next;

        if(del==Tail){
            Tail=temp;
        }
        delete del;
    }

    void sortlist(){
        for(Node*i=Head; i!=NULL; i=i->next){
            for(Node*j=i->next; j!=NULL; j=j->next){
                if(i->val > j->val){
                    swap(i->val, j->val);
                }
            }
        }
    }

    void headtotail(){
        if(Head==NULL||Head->next==NULL){
            cout<<"No Nore or Single Node"<<endl;
            return;
        }
        Node*Temp=Head;
        Head=Head->next;
        Tail->next=Temp;
        Temp->next=NULL;
        Tail=Temp;
    }

    void TailtoHead(){
        if(Head==NULL||Head==Tail){
            cout<<"No Nore or Single Node"<<endl;
            return;
        }
        Node*temp=Head;
        while(temp->next!=Tail){
            temp=temp->next;
        }
        Tail->next=Head;
        Head=Tail;
        Tail=temp;
        Tail->next=NULL;

    }

    void swapnodes(){
        float x, y;
        cout<<"Enter two values: ";
        cin>>x>>y;
        Node* a=Head;
        Node* b=Head;
        while(a &&a->val!=x){
            a=a->next;
        }
        while(b&&b->val!=y){
            b=b->next;
        }
        if(a&&b){
            swap(a->val, b->val);
        }
    }

    void display() {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverselist(){
    if(Head==NULL||Head->next==NULL){
        cout<<"List is Empty or Not Possible"<<endl;

    }
    Node*prev=NULL;
    Node* Curr=Head;
    Node*nextnode=NULL;
    while(Curr!=NULL){
        nextnode=Curr->next;
        Curr->next=prev;

        prev=Curr;
        Curr=nextnode;
    }
    Head=prev;
}

void menu(int choice) {
    if (choice == 1) {
        Sll();
    }
    else if (choice == 2) {
        InsertAtHead();
    }
    else if (choice == 3) {
        InsertAtTail();
    }
    else if (choice == 4) {
        InsertAfterPosition();
    }
    else if (choice == 5) {
        InsertBeforePosition();
    }
    else if (choice == 6) {
        delHead();
    }
    else if (choice == 7) {
        delTail();
    }
    else if (choice == 8) {
        delByPosition();
    }
    else if (choice == 9) {
        delbyvalue();
    }
    else if (choice == 10) {
        sortlist();
    }
    else if (choice == 11) {
        headtotail();
    }
    else if (choice == 12) {
        TailtoHead();
    }
    else if (choice == 13) {
        swapnodes();
    }
    else if (choice == 14) {
        display();
    }
    else if (choice == 15) {
        reverselist();
    }
}


};

int main() {
    Sll obj;
    int choice;
    do {
        cout << "\n1.Create Singly LinkList\n2.Insert at Head\n3.Insert at Tail\n4.Insert node after position\n5.Insert node before position\n6.Delete Head\n7.Delete Tail\n8.Delete by position\n9.Delete by value\n10.Sort Singly LinkList\n11.Change Head to Tail\n12.Change Tail to Head\n13.Swap Singly LinkList values\n14.Display Singly LinkList\n15.Reverse Singly LinkList\n0.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        obj.menu(choice);
    } while (choice != 0);
    return 0;
}
