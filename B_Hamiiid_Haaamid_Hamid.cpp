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
    ll left=0,lescape=0;
    cin>>n>>k;
    k--;
    string s;
    cin>>s;
    for(0,k)
    {    if(s[i]!='#')   lescape++;
        else left++;
    }
    ll right=0,rescape=0;
    for(k+1,n){
        if(s[i]!='#')   rescape++;
        else right++;
    }
    ll LeftNum=left+ min(right,lescape);
    ll RightNum=right+min(left,rescape);
    ll ans=min(LeftNum,RightNum);
    if(left==0 || right==0){
        cout<<"1"<<endl;
    }else
    cout<<++ans<<endl;
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