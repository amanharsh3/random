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
    ll n, m;
    cin >> n >> m;
 
    vector<ll> a(n);
    multiset<ll> mp;
    for(int i=0; i<n; i++) {
    	int x; cin >> x;
    	a[i] = x;
    	mp.insert(x);
    } 
 
    for(int i=0; i<m; i++) {
    	int x; cin>>x;
    	auto it = mp.upper_bound(x);
    	if(it == mp.begin()) {
    		cout<<-1<<endl;
    	}
    	else {
    		it--;
    		cout<< *it <<endl;
    		mp.erase(it);
    	}
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
