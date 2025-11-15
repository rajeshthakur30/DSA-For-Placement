// fill( ) function: This is specially used to initialize or fill all the indexes of the array with a similar value.
#include <iostream>
#include <array>
using namespace std;

int main() {
    array <int , 5> arr;
    arr.fill(1);
    for(int i: arr)
       cout<<arr[i]<<" ";
    return 0;
}