#include<iostream>
using namespace std;
#define N 5
int q[N];
int front=-1;
int rear=-1;

void enque(){
    int x;
    cout<<"Enter value u wanna Enque: ";
    cin>>x;
    if (rear==N-1 && front==0 || front==rear+1){
        cout<<"Que is Full"<<endl;
    }else if(rear==N-1){
        rear=0;
        q[rear]=x;
    }else if(rear==-1&&front==-1){
        front=rear=0;
        q[rear]=x;
    }else{
        rear++;
        q[rear]=x;
    }
}

void deque(){
    if(rear==-1&&front==-1){
        cout<<"Que is Empty"<<endl;
    }else if(front==rear){
        cout<<"Delete Value"<<q[front]<<endl;
        front=rear=-1;
    }else if(front==N-1){
        cout<<"Deleted Value:"<<q[front]<<endl;
        front=0;
    }else{
        cout<<"Deleted Value"<<q[front]<<endl;
        front++;
    }
}
void Top(){
    if(front==-1&&rear==-1){
        cout<<"Que is Empty"<<endl;
    }else{
        cout<<"Front: "<<q[front]<<endl;
    }
}

void display(){
    if(front==-1&&rear==-1){
        cout<<"Que is Empty"<<endl;
    }else{
        int i=front;
        while(i!=rear){
            cout<<q[i]<<" ";
            i=(i+1)%N;
        }
        cout<<q[rear]<<endl;
    }
}
int main(){
int choice;
do{
cout<<"\n1: Enque(): "<<endl;
cout<<"2: deque(): "<<endl;
cout<<"3: front(): "<<endl;
cout<<"4: Display(): "<<endl;
cout<<"0: Exit(): "<<endl;
cin>>choice;
switch(choice){
case 1:
enque();
break;
case 2:
deque();
break;
case 3:
Top();
break;
case 4:
display();
break;
}
}while(choice!=0);
}
