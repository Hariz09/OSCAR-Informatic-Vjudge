#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
	fast
    int t; // Declare a variable 't' to store the number of elements in the array
    cin >> t; // Read the number of elements from input

    int a[t-1]; // Declare an array 'a' to store 't-1' elements

    cin >> a[0]; // Read the first element of the array 'a'

    int mx = a[0], mn = a[0], ans(0); // Initialize variables 'mx' and 'mn' with the first element, and 'ans' to 0

    for(int i = 1; i < t; i++) { // Loop to read the remaining elements of the array
        cin >> a[i]; // Read the next element into 'a[i]'

        if (max(a[i], mx) > mx) { // Check if the current element is greater than 'mx'
            mx = a[i]; // Update 'mx' if the current element is greater
            ans++; // Increment 'ans'
        } 
        else if (min(a[i], mn) < mn) { // Check if the current element is smaller than 'mn'
            mn = a[i]; // Update 'mn' if the current element is smaller
            ans++; // Increment 'ans'
        }
    }

    cout << ans; // Print the final value of 'ans', which represents the count of elements that exceed the current maximum or minimum

    return 0;
} 
