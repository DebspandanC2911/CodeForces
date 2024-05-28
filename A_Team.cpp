#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
#define for(i, s, n) for(int i = s; i < n; i++)
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
int solve(){
    ll n; 
    cin>>n; 
    vector<vector<int>> dda( n , vector<int> (3));
    for(i, 0,n){
        for(j, 0,3){
            cin>>dda[i][j];
        }
    }
    int count=0,prog=0;
    for(i, 0, n){
        for(j, 0, 3){
            if(dda[i][j] == 1){
                count++;
            }
        }
        if(count>=2){
            prog++;
        }
        count=0;
    }
    return prog;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int p=solve();
    cout<<p;
}