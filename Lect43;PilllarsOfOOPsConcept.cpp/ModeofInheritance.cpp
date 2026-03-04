//sup class-Public,Sub class-Public ans-public
// #include<iostream>
// using namespace std;

// class Human{
//   public:
//   int height;
//   int weight;
//   private:
//   int age;

// };

// class Male: public Human{//male inherit kar raha hai human ko
//   public:
//   string color;

// };

// int main(){
// Male m1;
// cout<<m1.height<<endl;

// return 0;

// }

//sup class-Public,Sub class-protected ans-protected
// #include<iostream>
// using namespace std;

// class Human{
//   public:
//   int height;
//   int weight;
//   private:
//   int age;

// };

// class Male: protected Human{//male inherit kar raha hai human ko
//   public:
//   string color;

//   //protect class same priivate class ke tarah hot hai usko toh class ke under used kar sakte hai function bana ke but class ke bahar used nhi kar sakte hai
//   int getheight(){
// return this->height;
//   }

// };

// int main(){
// Male m1;
// cout<<m1.getheight()<<endl;

// return 0;

// }



//sup class-Public,Sub class-private ans-private
#include<iostream>
using namespace std;

class Human{
  public:
  int height;
  int weight;
  private:
  int age;

};

class Male: private Human{//male inherit kar raha hai human ko
  public:
  string color;

  //private class ke data ko hm class ke bahar access nhi kar sakte hai but class ke under used kar sakte hai
  int getheight(){
return this->height;
  }

};

int main(){
Male m1;
cout<<m1.getheight()<<endl;

return 0;

}

