#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
#define for(s, n,j) for(int j = s; j < n; j++)
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
bool checker(ll i,llvec &arr,ll k){
    for(0,arr.size(),j){
        ll diff=i-arr[j];
        ll ans=diff/k;
        if(ans&1) return false;
        if(i>=arr[j]+ans*k && i<=arr[j]+(ans+1)*k){continue;}
        else return false;
    }
    return true;
}
void solve(){
    ll n,k; 
    cin>>n>>k; 
    llvec arr(n); 
    for(0,n,i){
        cin>>arr[i];
    }   
    sort(arr.begin(),arr.end());
    for(arr[n-1],arr[n-1]+k,i){
        bool flag= checker(i,arr,k);
        if(flag){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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