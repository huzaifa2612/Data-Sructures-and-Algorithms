#include<iostream>
#include<cstdlib>
using namespace std;
#define N 5
int q[N];
int front=-1;
int rear=-1;

void Enque(){
    int x;
    cout<<"Enter Value: ";
    cin>>x;

    if(rear==N-1){
        cout<<"Que is Full: "<<endl;
    }else if(front==-1&&rear==-1){
        front=0;
        rear=0;
        q[rear]=x;
    }else{
        rear++;
        q[rear]=x;
    }

}

void Deque(){
if(rear==-1&&front==-1){
    cout<<"Que is Empty"<<endl;
}else if(front==rear){
    cout<<"Deleted Value: "<<q[front]<<endl;
    front=rear=-1;
}else{
    cout<<"Deleted Value: "<<q[front]<<endl;
    front++;
}
}

void Front(){
    if(front==-1 && rear==-1){
        cout<<"Que is Empty"<<endl;
    } else {
        cout<<"Current Front Value is: "<<q[front]<<endl;
    }
}

void display(){
    if(front==-1&&rear==-1){
        cout<<"Que is Empty"<<endl;
    }else{
        for(int i=front; i<=rear; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int choice;
    do{
        cout<<"1. Enque"<<endl;
        cout<<"2. Deque"<<endl;
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
             exit(0);
             break;
             
        }
        
    }while(choice!=0);
}
