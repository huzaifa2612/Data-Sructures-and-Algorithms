#include<iostream>
#include<cstdlib>
using namespace std;

#define N 5

int q[N];
int front = -1;
int rear = -1;

// 🔥 Normal Enqueue
void Enque(){
    int x;
    cout<<"Enter Value: ";
    cin>>x;

    if(rear == N-1){
        cout<<"Queue is Full"<<endl;
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        q[rear] = x;
    }
    else{
        rear++;
        q[rear] = x;
    }
}

// 🔥 Priority Dequeue (delete largest element)
void Deque(){

    if(front == -1 && rear == -1){
        cout<<"Queue is Empty"<<endl;
        return;
    }

    // 🔍 find max element index
    int maxIndex = front;

    for(int i = front; i <= rear; i++){
        if(q[i] > q[maxIndex]){
            maxIndex = i;
        }
    }

    cout<<"Deleted (Highest Priority): "<<q[maxIndex]<<endl;

    // 🔥 shift elements
    for(int i = maxIndex; i < rear; i++){
        q[i] = q[i+1];
    }

    rear--;

    // 🔥 reset if empty
    if(rear < front){
        front = rear = -1;
    }
}

// 🔥 Show Front
void Front(){
    if(front == -1 && rear == -1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Front Value: "<<q[front]<<endl;
    }
}

// 🔥 Display Queue
void display(){
    if(front == -1 && rear == -1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        for(int i = front; i <= rear; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int choice;

    do{
        cout<<"\n1. Enqueue"<<endl;
        cout<<"2. Dequeue (Priority)"<<endl;
        cout<<"3. Front"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"0. Exit"<<endl;

        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                Enque();
                break;

            case 2:
                Deque();
                break;

            case 3:
                Front();
                break;

            case 4:
                display();
                break;

            case 0:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice != 0);

    return 0;
}
