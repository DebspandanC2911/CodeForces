#include<bits/stdc++.h> 
using namespace std;

const int N = 1e7+10;
#define ll long long
#define ull unsigned long long
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
    
llvec grd(N,-1);
void solve1(){
    ll c=0; 
    grd[0] = 0; 
    grd[1] = 1; 
    for(ll i=2;i<N;i++) { 
        if(grd[i] == -1) { 
            c++; 
            if(i == 2)    c=0; 
            if(i == 3)    c=2; 
            for(ll j=i;j<N;j+=i){ 
                if(grd[j] == -1)     grd[j] = c; 
            } 
        } 
        if(grd[i] == -1) { 
            c++; 
        } 
    } 
}
void solve(){
    ll n; 
    cin >> n; 
    ll x=0; 
    while(n--) { 
        ll a; 
        cin >> a; 
        x^=grd[a]; 
    } 
    cout << (x==0?"Bob":"Alice") << "\n"; 
}        
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve1();
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }
}