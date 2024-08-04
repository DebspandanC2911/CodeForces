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
    ll n; 
    cin>>n; 
    llvec even,odd;
    for(0,n){
        ll x;
        cin>>x;
        if(!(x&1)){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }   
    int c=0;
    if(even.empty()){cout<<0<<endl;return;}
    if(odd.empty()){cout<<0<<endl;return;}
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    ll dsc=odd.back();
    for(0,even.size()){
        if(dsc>even[i]){
            c++;
            dsc+=even[i];
            
        }
        else{
            cout<<1+even.size()<<endl;
            return;
        }
    }
    cout<<c<<endl;
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