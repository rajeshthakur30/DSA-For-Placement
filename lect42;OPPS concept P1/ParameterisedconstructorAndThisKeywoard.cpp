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
   

 //Parameterised Constructor
Hero(int health){
   this->health=health;
 }

 Hero(int health,char level){
    this -> level=level;
    this->health=health;

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
    Hero ramesh(10);//input value of parameterised constructor
    //cout<<"Address of ramesh "<< &ramesh << endl;
    // ramesh.getHealth();
    ramesh.print();//print function calll 

    //dynmically
    Hero *h=new Hero(11);
    h->print();//print function calll 

    Hero temp(22,'B');//value initialise of health and  level
  temp.print();
    
}