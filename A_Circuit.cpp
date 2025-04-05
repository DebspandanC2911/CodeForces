#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
using namespace std; 

#define ll long long
#define ull unsigned long long
#define for(s, n) for(int i = s; i < 2*n; i++)
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
    ll n,tot=0; 
    cin>>n; 
    for(0,n) {
            int num;
            cin>>num;
            tot += num;
        }
        int maxi = ((tot<2*n-tot)?tot:(2*n-tot));
        int minx = tot % 2;
        cout<<minx<<" "<<maxi<<"\n";
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

