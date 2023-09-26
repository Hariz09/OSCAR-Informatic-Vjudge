#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
	fast
    int tc; 
    cin >> tc; 
    while (tc--){
    	string word;
        cin >> word; 

        if (word.length() > 10) // Check if the length of the word is greater than 10 characters.
        {
            // If the word is longer than 10 characters, abbreviate it by keeping the first character,
            // the count of characters between the first and last character, and the last character.
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        
        // If the word is 10 characters or shorter, output the word as it is.
        else cout << word << endl;
    }
}