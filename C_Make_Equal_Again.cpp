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
    ll n; 
    cin>>n; 
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    ll front=1;
    ll back=1;
    ll i=1;
    ll j=n-2;
    while(arr[i]==arr[i-1]){
        front++;
        i++;
    }
    while(arr[j]==arr[j+1]){
        back++;
        j--;
    }
    if(arr[0]==arr[n-1]){
        ll ans=n-front-back;
        if(ans<=0){
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        return;
    }
        ll maxi=max(front,back);
        cout<<n-maxi<<"\n";
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