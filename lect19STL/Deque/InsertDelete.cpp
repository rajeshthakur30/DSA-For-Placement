#include<iostream>
#include<deque>
using namespace std;

int main(){

deque<int>d;

d.push_back(1);
d.push_front(2);

// for(int i:d){
//     cout<<i<<" ";
// }
// // d.pop_back();
// // cout<<endl;
// // for(int i:d){
// //     cout<<i<<" ";
// // }

// d.pop_front();
// cout<<endl;
// for(int i:d){
//     cout<<i<<" ";
// }

cout<<endl;

//print element in 1sst index
cout<<"Print First index element-->"<<d.at(1)<<endl;

//printing front and back element 
cout<<"front "<<d.front()<<endl;
cout<<"back "<<d.back()<<endl;

//check whether it is empty or not
cout<<"Empty or not "<<d.empty()<<endl;

//size
cout<<"Before erase "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"After erase "<<d.size()<<endl;
for(int i:d){
    cout<<i<<endl;
}//size erase ke baad zero ho jata hai but jo maxsize allocate hoti hai deque ko w jitni starting me hoti hai wahi ending me hoti hai
}
