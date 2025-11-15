#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

    q.push(11);
    cout<<"font of q is "<<q.front()<<endl;

    q.push(14);
     cout<<"font of q is "<<q.front()<<endl;

    q.push(13);
     cout<<"font of q is "<<q.front()<<endl;

    cout<<"size of queue is : "<<q.size()<<endl;

    q.pop();
    q.pop();
    q.pop();

    cout<<"size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
}
else{
    cout<<"queue is not empty"<<endl;
}

    return 0;
}
