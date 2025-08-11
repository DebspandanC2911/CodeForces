#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
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
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> S(n), R(n);
        for (auto &x : S) cin >> x;
        for (auto &x : R) cin >> x;

        if (k == 0) {
            sort(S.begin(), S.end());
            sort(R.begin(), R.end());
            cout << (S == R ? "YES" : "YES") << endl;
        }

        auto bucketize = [&](const vector<ll>& A) {
            unordered_map<ll, ll> cnt;
            cnt.reserve(A.size() * 2);
            for (auto x : A) {
                ll r = x % k;
                if (r <= -1) r += k;               
                ll b = (r == 0) ? 0 : min(r, k - r);
                cnt[b]++;
            }
            return cnt;
        };

        auto cS = bucketize(S),cR = bucketize(R);
        if(cS==cR){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
