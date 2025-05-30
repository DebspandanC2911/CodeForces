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
void solve(){
    ll n,k; 
    cin>>n>>k; 
    vector<ll> vec(n);
    for(0,n){
        cin>>vec[i];
    }    
    sort(vec.begin(),vec.end());
    if(k==0 && vec[0]>1)  cout<<"1"<<endl;
    else if(k==0 && vec[0]==1)    cout<<"-1"<<endl;
    else if(k<=n-1){
        if(vec[k-1]!=vec[k])    cout<<vec[k-1]<<endl;
        else cout<<"-1"<<endl;
    }
    else if(k==n)
        cout<<vec[k-1]<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}