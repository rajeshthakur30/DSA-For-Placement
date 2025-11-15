// #include<iostream>
// using namespace std;

// int main(){
//     int second[3]={5,7,11};
//     cout<<" value at 1 index" << second[1]<<endl;
//     cout<<"Everything is fine"<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){

    int num[15];
    cout<<"value at 14 index "<< num[14]<<endl;

    int second[3]={5,7,11};
    cout<<"value at 2 index "<<second[2]<<endl;

    int third[15]={2,7};
    int n=7;
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }

    int fourth[10]={0};
    n=10;     
    cout<<endl<<"printing the fourth array"<<endl;   
    for(int i=0;i<=n;i++){
        cout<<fourth[i]<<" ";
    }

    cout<<endl<<"everything is fine"<<endl;
        return 0;
}