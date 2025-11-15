//size( ) or max_size( ) and sizeof( ) function: Both size( ) or max_size( ) are used to get the maximum number of indexes in the array while sizeof( ) is used to get the total size of array in bytes.

#include <iostream>
#include <array>
using namespace std;

int main() {
    array <int , 10> arr;    
    cout<<arr.size()<<'\n'; // total num of indexes
    cout<<arr.max_size()<<'\n'; // total num of indexes
    cout<<sizeof(arr); // total size of array
    return 0;
}


