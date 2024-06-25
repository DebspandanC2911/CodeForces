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
    int x,y;
    cin>>x>>y;
    string s;cin>>s;
    vector<ll> change(y,0);
    for(int i=0;i<y;i++){
        cin>>change[i];
    }
    string s_c;cin>>s_c;
    sort(s_c.begin(),s_c.end());
    map<int,int> map1;
    for(auto it: change){
        map1[it]++;
    }
    int ex=0;
    for(auto it:map1){
        ex+=it.second;
        ex-=1;
    }
    s_c=s_c.substr(0,y-ex);
    int j=0;
    for(auto it:map1){
        int position=it.first;
        s[position-1]=s_c[j];
        j+=1;
    }
    cout<<s<<endl;
    //cout<<s_c<<endl;
}
int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}