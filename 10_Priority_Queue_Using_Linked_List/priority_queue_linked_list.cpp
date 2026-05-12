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

class Inque{
    Node* front;
    Node* rear;

public:

    Inque(){
        front = rear = NULL;
    }

   
    void push(int val){
        Node* newnode = new Node(val);

        if(front == NULL){
            front = rear = newnode;
        }else{
            rear->next = newnode;
            rear = newnode;
        }
    }

   
    void Deque(){

        if(front == NULL){
            cout<<"Queue is Empty"<<endl;
            return;
        }

        Node* temp = front;
        Node* maxNode = front;
        Node* prev = NULL;
        Node* maxPrev = NULL;

        
        while(temp != NULL){
            if(temp->val > maxNode->val){
                maxNode = temp;
                maxPrev = prev;
            }
            prev = temp;
            temp = temp->next;
        }

        cout<<"Deleted (Highest Priority): "<<maxNode->val<<endl;

       
        if(maxPrev == NULL){
            front = front->next;
        }else{
            maxPrev->next = maxNode->next;
        }

      
        if(maxNode == rear){
            rear = maxPrev;
        }

        delete maxNode;
    }

    void top(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<"Front: "<<front->val<<endl;
        }
    }

    void display(){
        if(front == NULL){
            cout<<"Queue is Empty"<<endl;
            return;
        }

        Node* temp = front;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){

    Inque q;

   
    q.push(1);
    q.push(3);
    q.push(2);
    q.push(5);
    q.push(4);

    cout<<"Queue: ";
    q.display();
  
    q.Deque();
    q.display();

    q.Deque();
    q.display();

    q.top();

    return 0;
}
