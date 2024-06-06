#include<bits/stdc++.h> 
using namespace std; 
int solve(int l,int r){
       int maxi=0;
       while(r>1){
        r/=2;
        maxi++;
       }
       return maxi;
        
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l,r;
        cin >> l >> r;
        cout<< solve(l,r)<<endl;
    }
    return 0;
}