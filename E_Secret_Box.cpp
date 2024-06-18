#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
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
    ll l,w,h,div; 
    cin>>l>>w>>h>>div; 
    ll Vol_max=0;
    for(ll li=1;li<l+1;li++){
        for(ll wi=1;wi<w+1;wi++){
            ll count=div%(li*wi);
            if(count==0 && count<=h){
                Vol_max=max(Vol_max, (l-li+1)*(w-wi+1)*(h-(div/(li*wi))+1));
            }
        }
    }
    cout<<Vol_max<<endl;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}