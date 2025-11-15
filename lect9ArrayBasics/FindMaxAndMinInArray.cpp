#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    }
    return mini;
}

int getMax(int num[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
    }
    return maxi;
}

int main(){
    int size;
    cin>>size;

     if (size <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
     }

     int *num = new int[size];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"maximum value is "<<getMax(num,size)<<endl;
    cout<<"minimum value is "<<getMin(num,size)<<endl;
    return 0;
}