#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define INF 1e9
//GCD of 2 num
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        ll G = a[0];
        for (int i = 1; i < n; i++) G = gcd(G, a[i]);
        int c = count(a.begin(), a.end(), G);
        if (c >= 1) {
            cout << (n - c) << endl;
            continue;
        }
        vi b(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            b[i] = a[i] / G;
            mx = max(mx, b[i]);
        }
        sort(b.begin(), b.end());
        reverse(b.rbegin(),b.rend());
        b.erase(unique(b.begin(), b.end()), b.end());
        vi dist(mx + 1, INF);
        //BFS Code
        queue<int> q;
        for (int v : b) {
            dist[v] = 1;
            q.push(v);
        }
        while (!q.empty()) {
            int d = q.front(); q.pop();
            if (d == 1) break;
            for (int v : b) {
                int g = gcd(d, v);
                if (dist[g] > dist[d] + 1) {
                    dist[g] = dist[d] + 1;
                    q.push(g);
                }
            }
        }
        int L = dist[1];
        cout << (n+L-1+1-2*1) <<endl;
    }
    return 0;
}