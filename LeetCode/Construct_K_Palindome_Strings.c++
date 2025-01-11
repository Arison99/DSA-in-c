#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if (k > s.length()) return false; // More palindromes than characters
        
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }
        
        int oddCount = 0;
        for (auto& entry : charCount) {
            if (entry.second % 2 != 0) {
                oddCount++;
            }
        }
        
        return oddCount <= k;
    }
};

int main() {
    Solution solution;
    
    // Example use case 1
    string s1 = "annabelle";
    int k1 = 2;
    cout << "Can construct " << k1 << " palindromes from \"" << s1 << "\": " 
         << (solution.canConstruct(s1, k1) ? "Yes" : "No") << endl;
    
    // Example use case 2
    string s2 = "leetcode";
    int k2 = 3;
    cout << "Can construct " << k2 << " palindromes from \"" << s2 << "\": " 
         << (solution.canConstruct(s2, k2) ? "Yes" : "No") << endl;
    
    // Example use case 3
    string s3 = "true";
    int k3 = 4;
    cout << "Can construct " << k3 << " palindromes from \"" << s3 << "\": " 
         << (solution.canConstruct(s3, k3) ? "Yes" : "No") << endl;
    
    return 0;
}