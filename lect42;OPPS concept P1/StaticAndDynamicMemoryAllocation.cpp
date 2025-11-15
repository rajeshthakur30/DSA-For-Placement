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

    //static allocation
   Hero a;
   a.setHealth(80);
   a.setlevel('B');
   cout<<"Level is "<< a.level <<endl;
   cout<<"health is "<< a.getHealth() <<endl;

//dynamically
Hero *b=new Hero; 
b->setlevel('A');
b->setHealth(70);

cout<<"Level is "<<(*b).level <<endl;
cout<<"health is "<< (*b).getHealth() <<endl;

// above cout also written as
cout<<"Level is "<<b->level <<endl;
cout<<"health is "<< b->getHealth() <<endl;

}