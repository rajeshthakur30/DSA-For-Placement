// Updating Elements
// To update a value, we can simply assign a new value to an existing key using map[key]= newValue; If the key already exists , the value gets updated.
// Time complexity to update element by key O(log n).

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m = {{1, "Geeks"},
             {2, "For"}, {3, "Geeks"}};

    // Updating value
    m[0] = "Tweaks";
    m.at(1) = "By";
    
    cout << m[0] << endl;
    cout << m.at(1);
    return 0;
}