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
#define Size 100010
vector<ll> adj[Size];
bool vis[Size];
ll n,m,total=0;
ll cc[Size];
void dfs(ll s,ll sum)
{
    if(vis[s])
        return;

    vis[s]=1;

    if(cc[s])
        sum++;
    else
        sum=0;

    if(sum>m)
        return;

    if(s!=1 && adj[s].size()==1)
    {
        total++;
    }

    for(0,adj[s].size())
    {
        dfs(adj[s][i],sum);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll u,v;

    memset(vis,0,sizeof(vis));

    cin>>n>>m;

    for(1,n+1)
        cin>>cc[i];

    for(0,n-1)
    {
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,0);

    cout<<total;

}