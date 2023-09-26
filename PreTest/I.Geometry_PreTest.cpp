#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
	fast
	ll t;
	cin >> t;
	while(t--) {
		ll n, m;
        cin >> n >> m;
        ll v[n];
        for(auto &i : v) cin >> i;
        sort(v, v+n);
        
        for(ll i=0; i<m; i++) {
        	ll a, b, c;
            cin >> a >> b >> c;
            ll d = lower_bound(v, v+n, b) - v;
            if(d<n and (v[d]-b) * (v[d]-b) < 4*a*c){ 
            	cout << "YES\n" << v[d] << '\n'; 
            	continue;
            }
            d--;
            if(d>=0 and (v[d]-b) * (v[d]-b) < 4*a*c){ 
            	cout << "YES\n" << v[d] << '\n'; 
            	continue;
            }
            cout << "NO\n";
        }
    }
}