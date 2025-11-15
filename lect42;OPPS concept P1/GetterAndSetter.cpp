#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setlevel(char ch){
        level=ch;
    }
};
int main(){

    //creation of object
    Hero ramesh;

    cout<<" Ramesh health is " <<ramesh.getHealth()<<endl;

    //ramesh.health=70;
    ramesh.level='A';

    cout<<"health : "<<ramesh.getHealth()<<endl;
     cout<<"Level : "<<ramesh.level<<endl;

     return 0;
}