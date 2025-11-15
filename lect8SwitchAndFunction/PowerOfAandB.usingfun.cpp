#include<iostream>
using namespace std;

int power(int num1,int num2){
    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num2;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<"answer is "<<answer<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int power(int num1,int num2){//agar hm function me kuch bi likhe fark nhi padta hai jaruri nhi hai jo main fuction me jo value diya gya hai wahi likhe
//     int ans=1;
//     for(int i=1;i<=num2;i++){
//         ans=ans*num2;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int answer=power(a,b);
//     cout<<"answer is "<<answer<<endl;
//     return 0;
// }