#include<iostream>
#include<vector>
using namespace std;

vector<int>reverse(vector<int>arr,int m){
int s=m,e=arr.size()-1;

while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
}
return arr;
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr;
    arr.push_back(11);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);

    vector<int>ans=reverse(arr,3);
    cout<<"printing reversing array"<<endl;
    print(ans);
    return 0;

}