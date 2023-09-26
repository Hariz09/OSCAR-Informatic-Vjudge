// Solution F
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const ll N = 2e5 + 5;

int main(){
    ll tc;
    cin >> tc; // Read the number of test cases
    while(tc--){
        ll n;
        cin >> n; // Read the size of the array
        ll a[n]; // Declare an array of size 'n'
        for(ll i=0; i<n; i++) cin >> a[i]; // Read the elements of the array
        
        ll dp[n]; // Declare a DP array of size 'n'
        
        // Dynamic programming loop to calculate maximum possible sum
        for (ll i=n-1; i>=0; i--){
            dp[i] = a[i]; // Initialize dp[i] with the element itself
            ll j = i + a[i]; // Calculate the index where we can jump to
            
            if (j < n) // Check if jumping to 'j' is within the array bounds
                dp[i] += dp[j]; // Update dp[i] by adding dp[j]
        }
        
        // Find and print the maximum element in the DP array
        cout << *max_element(dp, dp + n) << '\n';
    }
}
