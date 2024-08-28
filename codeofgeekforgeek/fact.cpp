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
int main() {
    Solution ob;
    long long N = 5;
    vector<long long> result = ob.factorialNumbers(N);

    // Accessing individual elements
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "Factorial " << i + 1 << ": " << result[i] << endl;
    }

    return 0;
}
