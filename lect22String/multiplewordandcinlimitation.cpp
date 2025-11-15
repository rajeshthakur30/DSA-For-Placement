#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    name[3]='\0';

    cout<<"Your name is->";
    cout<<name<<endl;
    return 0;
}
