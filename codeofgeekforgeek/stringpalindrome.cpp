#include <iostream>
#include <cctype>  // For isalnum and tolower
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        
        // Normalize the string by filtering out non-alphanumeric characters and converting to lowercase
        for (char c : s) {
            if (isalnum(c)) {  // Check if the character is alphanumeric
                filtered += tolower(c);  // Convert to lowercase and append to filtered string
            }
        }
        
        // Check if the filtered string is a palindrome
        int left = 0;
        int right = filtered.size() - 1;
        
        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;  // If characters don't match, it's not a palindrome
            }
            left++;
            right--;
        }
        
        return true;  // If all characters matched, it is a palindrome
    }
};

int main() {
    Solution sol;
    
    // Example 1
    string s = "A man, a plan, a canal: Panama";
    cout << boolalpha << sol.isPalindrome(s) << endl;  // Output: true
    
    // Additional test case
    s = "race a car";
    cout << boolalpha << sol.isPalindrome(s) << endl;  // Output: false
    
    return 0;
}
