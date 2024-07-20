#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
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
    ll n,x,y; 
    cin>>n>>x>>y; 
    llvec nums(n+1);
    ll index=0;
    for(int i=y;i<=x;i+=1){
        nums[i]=1;
    } 
    index=-1;
    for(int i=y-1;i>=1;i-=1){
        nums[i]=index;
        index=-index;
    }
    index=-1;
    for(int i=x+1;i<=n;i++){
        nums[i]=index;
        index=-index;
    }
    for(int i=1;i<=n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;       
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