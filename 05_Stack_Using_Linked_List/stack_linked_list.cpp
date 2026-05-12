#include<iostream>
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

class Stack{
    Node* top;
public:

    Stack(){
        top = NULL;
    }

    void push(int val){
        Node* newnode = new Node(val);

        if(top == NULL){
            top = newnode;
        }
        else{
            newnode->next = top;  //Inserting at Head
            top = newnode;
        }
    }

    void pop(){
        if(top == NULL){
            cout << "Stack is Empty" << endl;
        }
        else{
            Node* temp = top;
            cout << "Deleted value is: " << temp->val << endl;
            top = top->next;
            delete temp;
        }
    }

    void Top(){
        if(top == NULL){
            cout << "Stack is Empty" << endl;
        }
        else{
            cout << "Top: " << top->val << endl;
        }
    }

    void display(){
        if(top == NULL){
            cout << "Stack is Empty" << endl;
            return;
        }

        Node* temp = top;
        while(temp != NULL){
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){

    Stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();

    s1.pop();
    s1.display();

    s1.Top();
    s1.display();
}
