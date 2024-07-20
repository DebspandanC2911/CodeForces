#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
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
    ll n; 
    cin>>n; 
    vi num(n);
    for(int i=0;i<n;i++)    cin>>num[i];
    sort(num.begin(),num.end());
    int c1=num[n-1];
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[num[i]]++;
    }   
    if(map[c1] & 1) cout<<"YES"<<"\n";
    else{
        bool citi=false;
        for(auto it:map){
            if(it.second & 1){
                citi=true;
            }
        }
        if(citi)    cout<<"YES\n";
        else    cout<<"NO\n";
    }
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