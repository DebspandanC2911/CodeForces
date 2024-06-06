#include <bits/stdc++.h>
using namespace std;

//completing the sequence
bool completer(vector <int> &vec){
    int n = vec.size();
    vector<int>sec(n, -1);
    for(int i=0;i<n;i++){
        if(vec[i]!=-1){
            sec[i]=vec[i];
        }
    }
    for(int i=1;i<n;++i){
        if(sec[i]==-1 && sec[i-1]!=-1){
            sec[i]=sec[i-1]*2;
            if(sec[i]>=1e9)  return false;
        }
        if(sec[i]!=-1 && sec[i-1]==-1){
            sec[i-1]=(sec[i]+1)/2;
        }
    }
    for(int i=0;i<n-1;++i){
        if((sec[i]==(sec[i+1]+1)/2 || sec[i+1]==sec[i]*2)){
            return false;
        }
    }

    vec=sec;
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        if(completer(vec)){
            for(int i=0;i<n;++i){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}