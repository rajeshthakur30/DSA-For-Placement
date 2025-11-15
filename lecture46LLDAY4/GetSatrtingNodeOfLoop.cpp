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

void insertAtHead(Node* &head,int d){

    //new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

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

      Node* floyDetectLoop(Node* head){
        if(head == NULL)
        return NULL;

        Node* slow = head;
        Node* fast = head;

        while(slow != NULL && fast!=NULL){
             
            //fast ko do baar badhiya
            fast=fast->next;
            if(fast != NULL){
                fast=fast->next;
            }

            //slow ko ek baar badhiya 
            slow = slow->next;
           
    //check karenge slow fast ke barabar agar hai toh loop exist karega nhi toh nhi
            if(slow == fast){
             cout<<"present at "<<slow->data<<endl;
                return slow;
            }
        }

         return NULL;
    }
Node* getStartingNode(Node* head){
    if(head==NULL)
        return NULL;
    
        Node* intersection=floyDetectLoop(head);
        Node* slow = head;

        while(slow!=intersection){
            slow=slow->next;
            intersection =intersection->next;
        }
  return slow;
}
void removeLoop(Node* head){
    if(head==NULL)
    return;

    Node* startOfLoop=getStartingNode(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp= temp->next;
    }
    temp->next=NULL;
}

int main(){
  
    //create a new node
     Node* node1= new Node(10);

  //head pointed to node1
  Node* head = node1;
  Node* tail=node1;

insertAtTail(tail,12);

insertAtTail(tail,15);

insertAtPosition(tail,head,4,22);
// print(head);

tail->next=head->next;

cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
// print(head);//it gives infinity loop

if(floyDetectLoop(head) != NULL){
    cout<<"Cycle is present"<<endl;
}
else{
    cout<<"Cycle not found"<<endl;
}
Node* loop = getStartingNode(head);
cout<<"loop start at "<<loop->data<<endl;
removeLoop(head);
print(head);
    return 0;
}