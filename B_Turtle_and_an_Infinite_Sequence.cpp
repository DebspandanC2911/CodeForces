#include<bits/stdc++.h> 
using namespace std; 
int solve(int n, int m){
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        vec[i]=i;
    }
    while(m--){
        for(int i=0;i<n;i++){
            if(i==0)    vec[i]=vec[i] | vec[i+1];
            else if(i==n-1)    vec[i]=vec[i] | vec[i-1];
            else    vec[i]=vec[i-1] | vec[i] | vec[i+1];
        }
    }
    return vec[n-1];
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int  n,m;
        cin >> n >> m;
        if(m==0){
            cout<<n<<endl;
        }
        else{
            cout<<solve(n,m)<<endl;
        }
    }
    return 0;
}