#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char level;

 Hero(){
    cout<<"Constructor Called"<<endl;
 }

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
    //object created statically 
    // cout<<"Hii"<<endl;
    Hero ramesh;
    // cout<<"Hello"<<endl;

    //dynmically
    Hero *h=new Hero;
}