#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll x;cin>>x;
        vector<int> res(32);
        for(int i=0;i<=31;i++){
            int a=x&(1<<i);
            res[i]=((a>0)?1:0);

        }
        int i=0;
        while(i<32){
            int j=i+1;
            if(res[i]==1 && j<31 && res[j]==1){
                while(j<32 && res[j]==1){
                    j++;
                }
                res[i]=1;
                for(int k=i+1;k<j;k++) res[k]=0;
                res[j]=1;//res is the answer
            }
            i=j;
        }
        cout<<32<<endl;
        for(int k=0;k<=31;k++){
            cout<<res[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}