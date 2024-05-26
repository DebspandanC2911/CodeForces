#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vector<char> dist;
        map<char,bool> visit;
        for(char c:s){
            if(!visit[c]){
                dist.push_back(c);
                visit[c]=true;
            }
        }
        sort(dist.begin(),dist.end());
        map<char,char> decode;
        for(int i=0;i<dist.size();i++){
            decode[dist[i]]=dist[dist.size()-i-1];
        }
        string correct;
        for(char c:s){
            correct+=decode[c];
        }
        cout<<correct<<endl;
    }
}