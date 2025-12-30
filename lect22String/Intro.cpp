#include<iostream>
using namespace std;

int main(){
    char name[20];

    cout<<"Enter your name:";
    cin>>name;
//WORKING OF NULL CHARACTER IN STRING 
name[2]='\0';
    cout<<"Your name is:";
    cout<<name<<endl;

    return 0;
}