#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
#define for(s, n) for(int i = s; i < n; i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define rev(s) reverse(s.begin(), s.end())
#define llvec vector<long long>
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define vpp vector<pair<int,int>>
#define all(v) v.begin(),v.end()
#define sz(v) (int)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
void solve(){
    ll l, r; cin >> l >> r;
    ll a, b; cin >> a >> b;
    llvec d(105, 0);
    ll v = min(r, b) - max(l, a);
    if(l < a) d[a - 1] = 1;
    if(a < l) d[l - 1] = 1;
    if(b > r) d[r] = 1;
    if(r > b) d[b]=1;

    ll ans = 0;
    for(1,102) {
        ans += d[i];
    }
    if(v < 0) ans = 0;
    ll var=ans + max(0LL, min(r, b) - max(l, a));
    cout<<max(1LL, var)<<endl;         
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}


