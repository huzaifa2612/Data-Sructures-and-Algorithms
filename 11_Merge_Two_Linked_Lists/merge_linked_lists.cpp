#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* Next;

Node(int val){
    data=val;
    Next=NULL;
}
};
class linklist{
    public:

    Node* Head;
    Node* Tail;
    
    linklist(){
        Head=Tail=NULL;
    }

    void push(int val){
      Node* newnode=new Node(val);
      if (Head==NULL){
        Head=Tail=newnode;
      }else{
        Tail->Next=newnode;
        Tail=newnode;
      }
    }

    void Display(){
        Node* Temp;
         Temp=Head;
        if(Head==NULL){
            cout<<"Linklsit is Empty: "<<endl;
        }else{
            while(Temp!=NULL){
                cout<<Temp->data<<"->";
                Temp=Temp->Next; 
            }
            cout<<"NULL";
        }
        }
    
        
};

void mergelist(const linklist& l1, const linklist& l2){

    Node* p1 = l1.Head;
    Node* p2 = l2.Head;

    linklist result;   

    while(p1 != NULL && p2 != NULL){

        if(p1->data <= p2->data){
            result.push(p1->data);   
            p1 = p1->Next;
        }
        else{
            result.push(p2->data);
            p2 = p2->Next;
        }
    }
  
    while(p1 != NULL){
        result.push(p1->data);
        p1 = p1->Next;
    }

    while(p2 != NULL){
        result.push(p2->data);
        p2 = p2->Next;
    }

  
    result.Display();
}

int main(){
    linklist l1;
    linklist l2;
    int value, n;

    cout << "How many nodes you want? ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Enter value for node " << i << ": ";
        cin >> value;
        l1.push(value);
    }

     cout << "\nHow many nodes for List 2? ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "Enter value for List 2 node " << i << ": ";
        cin >> value;
        l2.push(value);
    }



    cout << "\nFirst Linked List: ";
    l1.Display();
    cout<<endl;

    cout<<"\nSecond Linked List: ";
    l2.Display();
    cout<<endl;

    cout<<"\nSum of 2 Linklists: ";
    mergelist(l1, l2);


    return 0;
}
