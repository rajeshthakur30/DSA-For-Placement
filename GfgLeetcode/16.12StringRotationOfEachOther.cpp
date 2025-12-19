#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool areRotations(string s1, string s2) {
        // Step 1: Length check
        if (s1.length() != s2.length())
            return false;

        // Step 2: Concatenate s1 with itself
        string temp = s1 + s1;

        // Step 3: Check if s2 is a substring of temp
        if (temp.find(s2) != string::npos)
            return true;

        return false;
        
    }
};

int main() {
    Solution obj;

    string s1 = "abcd";
    string s2 = "cdab";

    if (obj.areRotations(s1, s2))
        cout << "true";
    else
        cout << "false";

    return 0;
}
