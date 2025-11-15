#include<iostream>
#include<map>
using namespace std;

class Node{
public:
int data;
Node* next;

//constructor
Node(int d){
    this->data=d;
    this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next != NULL){
          delete next;
          next=NULL;  
        }
 cout<<"Memory free for node with data"<<val<<endl;
}
};
void insertNode(Node* &tail,int element,int d){

  //empty list
  if(tail==NULL){
   Node* newNode =new Node(d); 
   tail=newNode;
   newNode->next=newNode;
  }
  else{
    //non empty list
    //assuming that the element is present in the list

    Node* curr=tail;

    while( curr->data != element){
      curr=curr->next;
    }

    //element found->curr is representing element wala node
    Node* temp=new Node(d);
    temp->next=curr->next;
    curr->next=temp;
  }
}

//traversing an element
// void print(Node* tail){
  
//   Node* temp=tail;
//   cout<<tail->data<<" ";

//   while(tail->next!=temp){
//   cout<<tail->data<<"  ";
//   tail=tail->next;
// }
// cout<<"  ";
// }

//also
//traversing an element
void print(Node* tail){
Node* temp=tail;
do{
cout<<tail->data<<" ";
tail=tail->next;
}while(tail != temp);
cout<<endl;
}

void deleteNode(Node* &tail, int value){

  //empty list
  if(tail == NULL){
    cout<<" List is empty ,please check again"<<endl;
    return;
  }
  else{
    //non-empty
    //assuming that "value" is present in the linked list
    Node* prev=tail;
    Node* curr=prev->next;

    while(curr->data != value){
      prev=curr;
      curr=curr->next;
    }
   prev->next=curr->next;
   if(tail == curr){
    tail=prev;
   }
   curr->next=NULL;
   delete curr;
  }
}
bool detectLoop(Node* head){
    if(head==NULL){
        return false;

        map<Node*,bool>visited;
        Node* temp =head;
        while(temp != NULL){
              
        //agar phelai se true hua toh, yahi toh hai cycle ka point cycle is present
        if(visited[temp] == true){
          return true;
            }
            //agar cycle present mhi hai toh
            visited[temp]=true;
            temp=temp->next;
        }
     return false;
    }
}
int main(){

  Node* tail=NULL;

  insertNode(tail,5,3);
  print(tail);

  insertNode(tail,3,5);
  print(tail);

  insertNode(tail,5,7);
  print(tail);

  insertNode(tail,7,9);
  print(tail);

  insertNode(tail,5,6);
  print(tail);

  insertNode(tail,9,10);
  print(tail);

  insertNode(tail,3,4);
  print(tail);

  deleteNode(tail,10);
  print(tail);

  return 0;
}