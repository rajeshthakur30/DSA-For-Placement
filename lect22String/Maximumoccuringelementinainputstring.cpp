#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26]={0};

    //creating an array of count of character
for(int i=0;i<s.length();i++){
    char ch=s[i];
//lowercase
int number=0;
if(ch >= 'a' && ch <='z'){
    number=ch-'a';
}
else{//uppercase
    number=ch-'A';

}
arr[number]++;
}
//find maximum occuring
int max=-1,ans=0;
for(int i=0;i<26;i++){
    if(max<arr[i]){
        ans=i;
        max=arr[i];
    }
}
char finalAns='a'+ans;
return finalAns;
}
int main(){
    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
    return 0;
}
