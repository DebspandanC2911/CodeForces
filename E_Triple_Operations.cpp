// WRONG ANSWER> DON"T COPY>//

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
void solve() {
    int left, right;
    cin >> left >> right;
    int res=0;
    int next_left = left + 1;
    int current_left = left;
    while (current_left > 0) {
        current_left /= 3;
        res+=2;
    }
    while (next_left > 0) {
        next_left /= 3;
        res += 1;
    }
    for (left+2,right+1) {
        int curr_num= i;
        while (curr_num> 0) {
            curr_num/= 3;
            res += 1;
        }
    }    
    cout<<res<<"\n";
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
