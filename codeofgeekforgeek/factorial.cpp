//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
    
  public:
  
    vector<long long> factorialNumbers(long long n) {
       vector<long long> result;
        long long fact = 1;
        for (long long i = 1; i <= n; i++) {
            fact *= i;  // Calculate factorial
            if (fact > n) break;  // Stop if the factorial exceeds n
            result.push_back(fact);  // Add factorial to the result
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends