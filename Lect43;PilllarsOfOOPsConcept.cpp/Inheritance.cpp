#include<iostream>
using namespace std;

class Human{
  public:
  int height;
  int weight;
  int age;

  public:
  int getAge(){
    return this->age;
  }
  void setWeight(int w){
    this->weight=w;
  }
};

class Male: public Human{//male inherit kar raha hai human ko
  public:
  string color;

  void sleep(){
    cout<<"Male sleeping"<<endl;
  }
};

int main(){
Male obj;

cout<<obj.age<<endl;
cout<<obj.weight<<endl;
cout<<obj.height<<endl;

cout<<obj.color<<endl;

obj.setWeight(84);
cout<<obj.weight<<endl;
obj.sleep();

return 0;

}


