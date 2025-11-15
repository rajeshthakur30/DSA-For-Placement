#include<iostream>
#include<array>//here we used library
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4>a={1,2,3,4};//eska implementation jo hai wo upar wale basic array se hi hoti hai that means array stl ka implementatiom fixed size array se hi hoti hai esko hm computative program me issiliye used nhi karte hai kyuki ye static hai
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at 2nd index is->"<<a.at(2)<<endl;//.at is used to access the size of an array
    cout<<"Empty or Not->"<<a.empty()<<endl;

    cout<<"first element ->"<<a.front()<<endl;//.friont is used to access front element
    cout<<"last element ->"<<a.back()<<endl;

}
