// 4.Finding Elements
// find() function is used to check if key exists in a map which looks for key and returns its position if found.
// If key is not present in the map, find() returns a special value called end(), meaning not found.
// Time complexity to find element by key is O(log n).
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Geeks"},
             {2, "For"}, {3, "Geeks"}};

    // Finding element with key 2
    auto it = m.find(2);
    
    if (it != m.end())
        cout << it->first << " " << it->second;
    else cout << "Key not Found!";
    return 0;
}