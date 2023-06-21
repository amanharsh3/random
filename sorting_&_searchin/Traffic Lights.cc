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
    ll x, n;
    cin>>x>>n;
 
    set<ll> st;
    multiset<ll> ms;
 
    st.insert(0); st.insert(x);
    ms.insert(x);
 
    while(n--) {
    	ll a; cin>>a;
    	auto it = st.lower_bound(a);
    	auto it2 = it;
    	it2--;
 
    	ms.erase(ms.find(*it - *it2));
    	ms.insert(*it - a);
    	ms.insert(a - *it2);
 
    	cout<<*--ms.end()<<" ";
    	st.insert(a);
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
