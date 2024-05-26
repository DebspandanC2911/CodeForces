#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans=y/2;
        y=y%2;
        x=max(0,x-ans*7);
        if(y){
            ans++;
            x=max(0,(x-11));
        }
        if(x)   ans+=x/15+!!(x%15);
        cout<<ans<<endl;
    }
}