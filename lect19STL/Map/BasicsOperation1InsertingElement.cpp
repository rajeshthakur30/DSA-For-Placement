// Inserting Elements
// The insert() operation adds a new key-value pair to the map only if the key is not already present.
// If the key exists, insert() does not update the value and leaves the map unchanged.
// Time complexity to insert is O(log n).
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{2, "For"}, {3, "Geeks"}};

    // Inserting a key value pair
    m.insert({1, "Geeks"});

    for (auto x: m)
        cout << x.first << " " << x.second
        << endl;
    return 0;
}


