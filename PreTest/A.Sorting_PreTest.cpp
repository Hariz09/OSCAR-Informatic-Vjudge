#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

int main(){
    fast // Use fast I/O optimization

    int tc; // Declare a variable 'tc' to store the number of test cases
    cin >> tc; // Read the number of test cases from input

    while(tc--){
        int a[3]; // Declare an array 'a' to store three integers
        cin >> a[0] >> a[1] >> a[2]; // Read three integers into the array 'a'
        sort(a, a+3); // Sort the array 'a' in ascending order

        cout << a[1] << '\n'; // Print the second smallest integer in 'a' followed by a newline
    }
}