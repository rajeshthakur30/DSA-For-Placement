//front( ) and back( ) function: These methods are used to access the first and the last element of the array directly.
#include <iostream>
#include <array>
using namespace std;

int main() {
    array <int , 3> arr={'G','f','G'};  // ASCII val of 'G' =71 
    cout<<arr.front() <<" "<<arr.back();
    return 0;
}