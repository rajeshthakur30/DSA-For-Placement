// Accessing Elements
// We can access elements with [] operator which returns the value for a given key and inserts the key with a default value if it doesn't exist.
// To check if a key exists without adding it by we can use find().
// Time complexity to access elements by key is O(log n).

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Geeks"},
             {2, "For"}, {3, "Geeks"}};

    // Accessing elements
    cout << m[1] << endl;
    cout << m.at(2);

    return 0;
}