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
    vector<vector<ll>>matrix(n,vector<ll>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll ans=0;
            //series of if..else to solve the issue
            if(i-1>=0)  ans=max(ans,matrix[i-1][j]);
            if(j-1>=0)  ans=max(ans,matrix[i][j-1]);
            if(i+1<n)   ans=max(ans,matrix[i+1][j]);
            if(j+1<m)   ans=max(ans,matrix[i][j+1]);

            //Updation of value of f
            int factor=1;
            if((i-1>=0 && matrix[i][j]<matrix[i-1][j]) || (j-1>=0 && matrix[i][j]<=matrix[i][j-1]) || (i+1<n && matrix[i][j]<=matrix[i+1][j]) || (j+1<m && matrix[i][j]<=matrix[i][j+1])) factor=0;
            if(factor==1){
                matrix[i][j]=ans;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
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