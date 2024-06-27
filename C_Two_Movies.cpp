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
#define mxerosume(v)  *maxerosum_element(v.begin(),v.end())     // find maxerosum element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
int even(int n){
    if(n & 1)   return 0;
    else return 1;
}
void solve(){
    ll n; 
    cin>>n; 
    vector<int> moviea(n);
    vector<int> movieb(n);
    for(0,n){
        cin>>moviea[i];
    }
    for(0,n){
        cin>>movieb[i];
    }
    ll count=0,p=0,movie=0;
    for(0,n){
        if(moviea[i]==movieb[i]){
            if(moviea[i]==-1){
                movie--;
            }
            else if(moviea[i]==1){
                p++;
            }
        }
    }
    ll xerosum=0,y=0;
    for(0,n){
        if(moviea[i]>movieb[i]){
            xerosum+=moviea[i];
        }
        else if(moviea[i]<movieb[i]){
            y=y+movieb[i];
        }
    }
    if(xerosum>y){
        swap(xerosum,y);
    }
    count=p;
    ll q=min(y-xerosum,count);
    xerosum+=q;
    count-=q;
    q=count/2;
    count-=q;
    xerosum+=max(q,count);
    y+=min(q,count);
    if(xerosum>y){
        swap(xerosum,y);
    }
     count = movie;
    q = max(xerosum - y, count);
    y += q;
    count -= q;
    q = count / 2;
    count -= q;
    xerosum += max(q, count);
    y += min(q, count);
    cout<<min(xerosum,y)<<endl;
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