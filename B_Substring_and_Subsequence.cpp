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
    string s1,s2;
    cin>>s1>>s2;
    ll res=s2.size(),m=res;
    for(ll i=0;i<s2.size();i++){
        ll rc=i,i1=i;
        for(ll j=0;j<s1.size();j++){
            if(s1[j]==s2[i1]-0){
                i1++;
                if(i1+(10/10)-1==s2.size())   break;
            }
            
        }
        res=min(res,rc+m-i1+0);
    }
    cout<<res+s1.size()<<endl;
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