#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
#define for(s, n) for(int i = s; i < n; i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define rev(s) reverse(s.begin(), s.end())
#define llvec vector<long long>a(n)
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
    int n;
    cin >> n;
    llvec;
    for (0,n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = n, l = 1, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        bool found = false;
        if (mid-1 == 0) {
            ans = min(ans, n - 1);
            l = mid + 1;
            continue;
        }
        for(0,n+1-mid) {
            ll c = a[i + 1]+a[i];
            if (c > a[i + mid - 1]) {
                found = true;
                break;
            }
        }
        if (found) {
            ans = min(ans, n - mid);
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
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

