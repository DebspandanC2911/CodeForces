#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
#define for(s, n) for(int i = s; i <=n; i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define rev(s) reverse(s.begin(), s.end())
#define llvec vector<long long>a()
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
    ll n,a,b; 
    cin>>n>>a>>b;
    ll ans;
    ll diff=b-a;
    if(diff<=0){
        diff=0;
    }
    if(diff>n){
        diff=n;
    }
    ans=(2*b-diff+1);
    ans=(diff*ans)/2;
    n=n-diff;
    if(n>0){
        ans+=n*a;
    }
    cout<<ans<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}