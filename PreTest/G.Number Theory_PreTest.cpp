#include "bits/stdc++.h"
using namespace std;
#define ll long long

const ll N = 1000001;
const ll SQ = sqrt(1000001);

bool primes[N];

void prime_sieve(){
    primes[0] = 0; // 0 is not prime
    primes[1] = 0; // 1 is not prime
    for(ll i = 2; i < N; ++i) primes[i] = 1; // Initialize all numbers as potential primes
    for(ll i = 2; i <= SQ; ++i){
        if(primes[i] == 1){ // If 'i' is marked as prime
            for(ll j = i * i; j <= N; j = j + i){ // Mark multiples of 'i' as non-prime
                primes[j] = 0;
            }
        }
    }
}

int main(){
    prime_sieve(); // Call the prime sieve function to generate prime numbers
    
    ll tc;
    cin >> tc; // Read the number of test cases

    while(tc--){
    	ll n;
    	cin >> n; // Read 'n'
    	ll sq = sqrt(n); // Calculate the square root of 'n'

    	// Check if 'n' is a perfect square and its square root is a prime number
    	if(sq * sq == n && primes[(ll)sqrt(n)]) 
            cout << "YES\n"; // 'n' is a perfect square of a prime number
    	else 
            cout << "NO\n"; // 'n' is not a perfect square or its square root is not prime
    }
}
