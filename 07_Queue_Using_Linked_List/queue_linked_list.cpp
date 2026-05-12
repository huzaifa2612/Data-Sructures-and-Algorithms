#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int v){
        val=v;
        next=NULL;
    }

};

class Inque{
    Node* front;
    Node* rear;
    public:

    Inque(){
        front=rear=NULL;
    }
    void push(int val){
        Node* newnode=new Node(val);
        if (front==NULL){
            front=rear=newnode;   
    }else{
        rear->next=newnode;
        rear=newnode;
    }
}

void Deque(){
    if(front==NULL){
        cout<<"List is EMpty"<<endl;
    }else if(front==rear){
        Node*temp=front;
        front=rear=NULL;
        delete temp;
    }else{
        Node*temp=front;
        front=front->next;
        temp->next=NULL;
        delete temp;

    }
}

void top(){
    if(front==NULL){
        cout<<"List is empty:"<<endl;
    }else{
        cout<<"Front: "<<front->val<<endl;
    }
}



void display(){
    if (front==NULL){
        cout<<"List is Empty: "<<endl;
    }
    Node* Temp=front;
while(Temp!=NULL){
    cout<<Temp->val<<"->";
    Temp=Temp->next;
}
cout<<"NULL"<<endl;
}
    
};
int main(){

    Inque l1;

    l1.push(1);
    l1.push(2);
    l1.push(3);
    l1.display();

    l1.Deque();
    l1.display();

    l1.top();
    l1.display();
}
