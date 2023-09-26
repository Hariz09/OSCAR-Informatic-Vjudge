#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read an integer 'n' from the user

    if (n == 2) {
        cout << "NO"; // If 'n' is equal to 2, print "NO"
    } else if (n % 2 == 0) {
        cout << "YES"; // If 'n' is an even number, print "YES"
    } else {
        cout << "NO"; // If neither of the above conditions is met, print "NO"
    }
}
