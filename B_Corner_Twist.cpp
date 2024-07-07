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
    ll n,m; 
    cin>>n>>m; 
    bool flag=true;
    vector<vector<int>>a(n,vector<int> (m));
    vector<vector<int>>b(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch;
            cin>>ch;
            a[i][j]=ch-'0';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch;
            cin>>ch;
            b[i][j]=ch-'0';
        }
    }
    for(int i=n-1;i>=1;i--){
        for(int j=m-1;j>=1;j--){
            if(a[i][j]!=b[i][j]){
                int diff=(b[i][j]-a[i][j]+3)%3;
                a[i][j] = b[i][j];
                a[i-1][j] = (a[i-1][j] + 2 * diff) % 3;
                a[i][j-1] = (a[i][j-1] + 2 * diff) % 3;
                a[i-1][j-1] = (a[i-1][j-1] + diff) % 3;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i][0]!=b[i][0])    flag=false;
    }
    for(int j=0;j<m;j++){
        if(a[0][j]!=b[0][j])    flag=false;
    }
    if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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