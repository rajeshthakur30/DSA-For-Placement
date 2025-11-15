// Traversing
// Loops can be used to traverse all key-value pairs in a map, which visits each pair in order sorted by the keys.
// Time complexity to traverse in a map is O(n).
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Geeks"},
             {2, "For"}, {3, "Geeks"}};
    
    // Traversing using iterators
    for (auto it = m.begin(); it != m.end(); ++it) 
        cout << it->first << " " << it->second
        << endl;

    return 0;
}