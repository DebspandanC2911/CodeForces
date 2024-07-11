#include<bits/stdc++.h> 
using namespace std; 

#define ll long long
#define ull unsigned long long
#define rev(s) reverse(s.begin(), s.end())
#define llvec vector<long long>a()
#define vi vector<ll>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define vpp vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define sz(v) (ll)(v.size())
#define srt(v)  sort(v.begin(),v.end())         // sort
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
void solve(){
    ll n,jump,swim; 
    cin>>n>>jump>>swim; 
    string s;
    cin>>s;
    ll jump_copy=jump,c2=0,c3=0;
    jump_copy-=1;
    for(auto it:s){
        if(it=='L'){
            jump_copy=jump;
        }
        else if(it=='W'){
            if(jump_copy<=0){
                c2+=1;
            }
        }
        else if(it == 'C'){
            if(jump_copy<=0){
                c3+=1;
            }
        }
        jump_copy--;
    }    
    c3=(c2>swim)?c3+=1:c3;
    cout<<((c3!=0)?"NO\n":"YES\n");
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}