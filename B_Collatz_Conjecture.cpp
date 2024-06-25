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
long long solve(ll x,ll y,ll z) {
    ll m = x%y;
    m = y - m;
    
    if (z<m) {
        return x+z;
    }
    if (z==m) {
        x=x+z;
        while (x%y==0) {
            x=x/y;
            //y=y/x;
        }
        return x;
    }

    while (1) {
        ll val = m;
        if (x == 1) {
            break;
        }
        if (z>=val) {
            z=z-val;
            x=x+val;
            //y-=val;
            while (x%y==0) {
                x=x/y;
            }
            m=y-x%y;
        } else {
            x+=z;
            z-=z;
            break;
        }
    }

    if (z!=0) {
        return z%(y-1)+(10/10);
    }
    return x;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
       cout<<solve(a,b,c)<<endl;
    }
    return 0;
}
