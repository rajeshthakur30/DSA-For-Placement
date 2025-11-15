#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;//creares vecotor
 
    vector<int>a(5,1);//size of vector is 5 and it is initialised with 1

    //use to copy the value of a
    vector<int>last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

//     cout<<"print a"<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }
// cout<<endl;

    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(1);//used to insert element in vector
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-->"<<v.capacity()<<endl;
    cout<<"Size-->"<<v.size()<<endl;

    cout<<"Element at 2nd index"<<v.at(2)<<endl;

    cout<<"front->"<<v.front()<<endl;
    cout<<"front->"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
cout<<endl;

v.pop_back();

cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size->"<<v.size()<<endl;

    v.clear();//used to clear the vector here size is 0 capacity is not zero
    cout<<"after clear size->"<<v.size()<<endl;


}
