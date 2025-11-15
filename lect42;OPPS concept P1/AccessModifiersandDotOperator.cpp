#include<iostream>
using namespace std;

class Hero{
    //properties
    public:
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }
};
int main(){

    //creation of object
    Hero ramesh;

    ramesh.health=70;
    ramesh.level='A';

    cout<<"health : "<<ramesh.health<<endl;
     cout<<"level : "<<ramesh.level<<endl;

     return 0;
}