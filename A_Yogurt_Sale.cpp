#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int n,a,b;
        cin>>n>>a>>b;
        if(2*a>b){
            sum=b*(n/2)+a*(n%2);
        }
        else{
            sum=a*n;
        }
        cout<<sum<<endl;
    }
    
        return 0;
}