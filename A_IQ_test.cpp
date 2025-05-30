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
void findkaroeven(vector<int>& vec){
    for(0,vec.size()){
        if(!(vec[i]&1)){
            cout<<i+1<<endl;
            break;
        }    
    }
}
void findkaroodd(vector<int>& vec){
    for(0,vec.size()){
        if(vec[i]&1){
            cout<<i+1<<endl;
            break;
        }    
    }
}
void solve(){
    ll n;
    cin>>n;
    vector<int> vec(n);
    for(0,n){
        cin>>vec[i];
    } 
    int even=0,odd=0;
    if(vec[0]&1)    odd++;
    else    even++;
    if(vec[1]&1)    odd++;
    else    even++;
    if(vec[2]&1)    odd++;
    else    even++;
    if(even>odd){
        findkaroodd(vec);
    }   
    else{
        findkaroeven(vec);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}