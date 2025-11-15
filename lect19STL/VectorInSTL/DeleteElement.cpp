// Delete Elements
//. Elements can be deleted from a vector using erase(), which requires an iterator pointing to the element. It takes linear time O(n) because all elements after the erased one need to be shifted.
// .To remove the last element efficiently, use pop_back() . It takes constant time O(1) on average, so it's very fast.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Deleting last element 'z'
  	v.pop_back();
  
  	// Deleting element 'f'
  	v.erase(find(v.begin(), v.end(), 'f'));
  	
  	for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}