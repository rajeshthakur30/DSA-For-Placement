// Maps are associative containers that store data as sorted pairs of keys and values. It is an implementation of Self-Balancing Binary Search Tree, specifically a Red-Black Tree Which ensures,

// Maps allow searching, insertion, and deletion and take O(log n) time.
// Maps automatically avoid duplicate keys.
// Keys are stored in ascending order.
// Compared to unordered_map, the times taken for search, insert and delete are more in map, but we get items in sorted order and it supports additional functions like upper_bound() and lower_bound().
#include <iostream>
#include <map>
using namespace std;

int main() {
    
    // Creating an empty map
    map<int, string> m1;

    // Initialze map with list
    map<int, string> m2 = {{1, "Geeks"},
              {2, "For"}, {3, "Geeks"}};

    for (auto& p : m2)
        cout << p.first << " " <<
        p.second << endl;
    return 0;
}
// Syntax
// The map container is defined as std::map class template inside the <map> header file.

// map<key_type, value_type> m;

// where,

// key_type: Data type of key.
// value_type: Data type of value.
// m: Name assigned to map.
