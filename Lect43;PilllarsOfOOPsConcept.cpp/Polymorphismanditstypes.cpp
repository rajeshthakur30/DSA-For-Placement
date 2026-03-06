// COMPILE TIME POLYMORPHISM


//a.>--FUNCTION OVERLOADING

// #include<iostream>
// using namespace std;

// class A{
//   public:
//   void sayHello(){
//     cout<<"Hello love Babbar"<<endl;
//   }
// int sayHello(char name){//agae do same function ek sath call karenge with same parameter that gives error callled function overloaded
//     cout<<"Hello love Babbar" <<endl;
//     return 1;
//   }
//   void sayHello(string name){
//     cout<<"Hello love Babbar"<<endl;
//   }
// };
// int main(){
// A obj;
// obj.sayHello();
// }


// b.>--Operator Overloading

// #include<iostream>
// using namespace std;

// class B{
//   public:
//   int a;
//   int b;

//   public:
//   int add(){
//     return a+b;
//   }
//   void operator+(B &obj){
//    /*  int value1 = this->a;
//     int value2=obj.a;
// cout<<"output "<<value2-value1<<endl;*/

// cout<<"Hello Babbar"<<endl;
//   }

//   void operator() (){
// cout<<"Main bracket hu "<<this->a<<endl;
//   }
// };

// int main(){
// B obj1,obj2;
// obj1.a=4;
// obj2.a=7;

// obj1+obj2;

// obj1();
// }





//RUNTIME POLYMORPHISM

#include<iostream>
using namespace std;

class Animal{
  public:
  void speak(){
    cout<<"Spaeakking"<<endl;
  }
};

class Dog:public Animal{
public:
void speak(){
  cout<<"Barking"<<endl;
}
};

int main(){
  Dog obj;
  obj.speak();
}