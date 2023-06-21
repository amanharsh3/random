#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;   
typedef unsigned long long ull; 
#define endl "\n"
#define pb push_back
#define INF 1e18
#define all(x) begin(x), end(x)
#define print(a) for(auto  &i: a) cout<<i<<" ";
const int mod = 1e9 + 7;
// cout << fixed << setprecision(0) << pi << endl;
 
//debug statements
#define debug1(p)        cout << #p << ": " << p << endl;
#define debug2(p, q)     cout << #p << ": " << p << " | " << #q << ": " << q << endl;
#define debug3(p, q, r)  cout << #p << ": " << p << " | " << #q << ": " << q << " | " << #r << ": " << r << endl;
#define debug4(p, q, r, s)  cout << #p << ": " << p << " | " << #q << ": " << q << " | " << #r << ": " << r << " | "<< #s << ": " << s << endl;
#define debug5(p, q, r, s, t)  cout << #p << ": " << p << " | " << #q << ": " << q << " | " << #r << ": " << r << " | "<< #s << ": " << s <<" | "<< #t << ": " << t << endl;
 
// check if test cases are mentioned or not
void solve() {
    int n, q;
    cin>>n>>q;
 
    vector<ll> a(n+1), p(n+1);
    for(int i=1; i<=n; i++) {
    	ll x; cin>>x;
    	a[i] = x;
    	p[a[i]] = i;
    }
 
    int ans = 1;
    for(int i=1; i<n; i++) 
    	ans += (p[i] > p[i+1]);
 
    set<pair<ll, ll>> st;
    while(q--) {
    	ll l, r;
    	cin>>l>>r;
 
    	if(a[l] + 1 <= n) st.insert({a[l], a[l]+1});
    	if(a[l] - 1 >= 1) st.insert({a[l]-1, a[l]});
    	if(a[r] + 1 <= n) st.insert({a[r], a[r]+1});
    	if(a[r] - 1 >= 1) st.insert({a[r]-1, a[r]});
 
    	for(auto &it: st) {
    		ans -= (p[it.first] > p[it.second]);
    	}
    	swap(a[l], a[r]);
    	p[a[l]] = l;
    	p[a[r]] = r;
    	for(auto &it: st) {
    		ans += (p[it.first] > p[it.second]);
    	}
    	cout<<ans<<endl;
    	st.clear();
    }
}
 
int32_t main() {    
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
