#include<iostream>
using namespace std;
int main(){
    int num[15];
cout<<"value at index 0 "<<num[0]<<endl;
cout<<"value at index 1 "<<num[1]<<endl;
cout<<"value at index 15 "<<num[14]<<endl;
//it generate error because we have declared array of size 15 but trying to access 20th index
cout<<"value at index 20 "<<num[20]<<endl; 
cout<<"Everything is fine"<<endl;
return 0;
}