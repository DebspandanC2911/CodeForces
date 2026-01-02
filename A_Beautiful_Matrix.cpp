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
    int k=0,l=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        int x;
        cin>>x;
        if(x==1){
            k=i+1;
            l=j+1;
        }
    }
    }
    cout<<abs(3-k)+abs(3-l);
        
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}