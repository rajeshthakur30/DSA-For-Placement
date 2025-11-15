#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    public:
    char level;

 Hero(){
  
    cout<<" Simple Constructor Called"<<endl;
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
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
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
// Hero suresh;
// suresh.setHealth(70);
// suresh.setlevel('C');

//in shortcut using parameterised constructor
Hero suresh(70,'C');
suresh.print();

// R.health=suresh.health;
// R.level=suresh.level;

//in shortcut
//copy constructor
Hero R(suresh);
R.print();
return 0;
}