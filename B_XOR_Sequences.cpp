#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
#define for(s, n) for(int i = s; i < n; i++)
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
int funcToCall(int n){
    if(n==0){
        return 0;
    }
    else{
        return __builtin_ctz(n)+1;
    }
}
void solve(){
    ll x,y; 
    cin>>x>>y; 
    int xor_val=x ^ y;
    int lsb=funcToCall(xor_val);
    int lcs= 1<< (lsb-1);
    cout<<lcs<<endl;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}