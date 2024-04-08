#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<int> ship(n);
        for(int i=0;i<n;i++){
            cin>>ship[i];
        }
        long long total=2LL*k;
        int fs=0,ls=0;
        for(int i=0;i<n && total>0;++i){
            int asc=min(ship[i],(int)(total/2));
            fs+=asc;
            total-=asc*2;
        }
        if(total>0){
            ls=min((int)(total/2),ship[n-1]);
        }
        cout<<(fs+ls)<<endl;
    }
    return 0;
}