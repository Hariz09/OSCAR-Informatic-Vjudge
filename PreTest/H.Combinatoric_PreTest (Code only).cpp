#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main(){
	fast
	ll n;
	cin >> n;
	ll a[n];
	for(ll& i : a) cin >> i; sort(a, a+n);
	
	ll cnt = count(a, a+n, a[0]);
	ll ans = count(a, a+n, a[n-1]);
	
	cout << a[n-1]-a[0] << ' ' << (a[0] == a[n-1]? n*(n-1)/2 : ans*cnt);
}