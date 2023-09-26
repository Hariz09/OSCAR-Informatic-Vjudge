#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    fast
    int tc;
    cin >> tc;
    while(tc--){
        // Initialize a boolean flag to true
        bool flag(1);
        int n, k;
        cin >> n;
        
        //Read n sort array 'a'
        int a[n];
        for(auto &i : a) cin >> i;
        sort(a, a+n);
        
        // Check if the difference between consecutive elements in the sorted array is greater than 1
        for(int i=1; i<n; i++){
            if(a[i]-a[i-1] > 1){
                // If the difference is greater than 1, set the flag to false and break out of the loop
                flag = 0;
                break;
            }
        }
        
        // Output "YES" if the flag is true, otherwise output "NO"
        cout << (flag? "YES" : "NO") << '\n';
    }
}