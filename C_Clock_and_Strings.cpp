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
    ll x1,y1,x2,y2; 
    cin>>x1>>y1>>x2>>y2;
    
    if(x2>y2){
        swap(x2,y2);
    }
    if(x2<x1 && x1<y2){
        if(x2<y1 && y1<y2){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    else if(x2<y1 && y1<y2){
        if(x2<x1 && x1<y2){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    else{
        cout<<"NO\n";
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


/* YES
NO
NO
NO
YES
YES
NO
NO
YES
YES
NO
YES
YES
YES
YES */