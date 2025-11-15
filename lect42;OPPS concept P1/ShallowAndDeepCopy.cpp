#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char *name;
    char level;

 Hero(){
  
    cout<<" Simple Constructor Called"<<endl;
    name = new char[100];
 }
   

 //Parameterised Constructor
Hero(int health){
   this->health=health;
 }

 Hero(int health,char level){
    this -> level=level;
    this->health=health;
}

    // copy constructor 
    Hero(Hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"Name:"<< this->name <<",";
        cout<<"health "<<this->health<<" ,";
        cout<<"level "<<this->level<<"]";
        cout<<endl;
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

    void setLevel(char ch){
        level=ch;
    }
    void setName( char name[]){
        strcpy(this->name, name);
    }
};
int main(){
   Hero hero1;
   hero1.setHealth(12);
   hero1.setLevel('D');
   char name[7]="Babbar";
   hero1.setName(name);
   hero1.print()
   return 0;
}