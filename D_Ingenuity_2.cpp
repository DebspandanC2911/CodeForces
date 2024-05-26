#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s1;cin>>s1;
        int n=0,e=0,w=0;
        int s=0;
        for(char c:s1){
            if(c=='N') n++;
            else if(c=='S') s++;
            else if(c=='E') e++;
            else if(c=='W') w++;
        }
        if(n==0 && s==0 && e==0 && w==0){
            cout<<"NO"<<endl;
        }
        string dir(n,'Q');
        int nN=n/2,hn=n-nN;
        int sS=s/2,hs=s-sS;
        int eE=e/2,he=e-eE;
        int wW=w/2,hw=w-wW;
        if(nN==0 && sS==0 && eE==0 && wW==0){
            cout<<"NO"<<endl;
        }
    } 
}