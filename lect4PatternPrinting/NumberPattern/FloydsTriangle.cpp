// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int cnt=1;
//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col<=row){
//           cout<<cnt<<" ";
//           cnt++;
//           col++;  
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n = 4, num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << num++ << " ";
        cout << endl;
    }
    return 0;
}
