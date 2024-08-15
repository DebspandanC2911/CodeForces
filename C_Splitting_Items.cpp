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
       vi arr(n);
       for(0,n){
        cin>>arr[i];
       } 
       sort(arr.rbegin(),arr.rend());
       for(0,n-1){
        if(k==0)    break;
        ll diff=arr[i]-arr[i+1];
        ll rem=min(diff,k);
        arr[i+1]=arr[i+1]+rem;
        k=k-rem;
        i++;
       }
       int oddsum=0;int evensum=0;
       for(0,n){
        if(i&1) oddsum+=arr[i];
        else    evensum+=arr[i];
       }
       cout<<abs(oddsum-evensum)<<endl;
        
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