#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this-> data = data;
        this ->next = NULL;
    }
};

//insert at head
void insertAtHead(Node* &head,int d){

    //new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}


//insert at tail
void insertAtTail(Node* &tail,int d){
    //new node created 
    Node* temp=new Node(d);
    tail->next=temp;
    // tail= tail ->next;
   // also 
   tail=temp;
}

//print function which is used to print ll
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data <<" " ;
        temp=temp->next;
    }
    cout<<endl;
}


// code for insert at any position
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    //insert at  start
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    //insert at middle
    Node* temp = head;
   int cnt=1;
   while(cnt<position-1) {
    temp = temp->next;
    cnt++;
   }

   //inserting at last position
   if(temp -> next == NULL){
    insertAtTail(tail,d);
    return;
   }

//create a node for d
Node* nodeToInsert=new Node(d);
nodeToInsert ->next = temp->next;

temp->next=nodeToInsert;
}

int main(){
  
    //create a new node
    Node* node1= new Node(10);

  //head pointed to node1
  Node* head = node1;
  Node* tail=node1;
print(head);

insertAtTail(tail,12);
print(head);

insertAtTail(tail,15);
print(head);

insertAtPosition(tail,head,1,22);
print(head);

cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;

    return 0;
}