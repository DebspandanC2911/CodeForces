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
    vector<string> mat(n);
    for(int i=0;i<n;i++){
        cin>>mat[i];
    }   
    int countY=-1,countX=-1;
    for(int i=0;i<=m-1;i++){
        int count=0;
        for(int j=0;j<=n-1;j++){
            if(mat[j][i]=='#'){
                count++;
            }  
        }
        if(count==1){
            for(int j=0;j<n;j++){
                if('#'==mat[j][i]){
                   countY=j; 
                }
            }
        }
    }
    int c1=0;
    for(int i=0;i<m;i++){
        if(mat[countY][i]=='#'){
            c1++;
        } 
    }
    int copy=0;
    for(int i=0;i<m;i++){
        if(mat[countY][i]=='#'){
            copy++;
            if(copy==(c1/2)+1){
                countX=i;
            }  
        }
    }
    cout<<countY+1<<" "<<countX+1<<endl;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}