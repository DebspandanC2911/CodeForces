#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
const int MOD = 998244353;
vector<ll> pow2 = {1};
void precompute_powers(int limit) {
    if ((int)pow2.size() <= limit) {
        int old_size = pow2.size();
        pow2.resize(limit + 1);
        for (int i = old_size; i <= limit; ++i) {
            pow2[i] = (pow2[i - 1] * 2) % MOD;
        }
    }
}

void process_case(int n, const vi &p, const vi &q) {
    vi posP(n), posQ(n);
    for (int i = 0; i < n; ++i) {
        posP[p[i]] = i;
        posQ[q[i]] = i;
    }
    precompute_powers(n);
    vi Pmax(n), Qmax(n), result(n);
    Pmax[0] = p[0];
    Qmax[0] = q[0];
    for (int i = 1; i < n; ++i) {
        if(Pmax[i-1]>p[i])  Pmax[i]=Pmax[i-1];
        else    Pmax[i]=p[i];
        if(Qmax[i-1]>q[i])  Qmax[i]=Qmax[i-1];
        else    Qmax[i]=q[i];
    }
    for (int i = 0; i < n; ++i) {
        int e = (Pmax[i]>Qmax[i])?Pmax[i]:Qmax[i];
        int s;

        if (Pmax[i] > Qmax[i]) {
            int j = posP[e];
            int k = i - j;
            s = q[k];
        } else if (Qmax[i] > Pmax[i]) {
            int k = posQ[e];
            int j = i - k;
            s = p[j];
        } else {
            s = max(((i - posP[e]) >= 0 && (i - posP[e]) < n ? q[i - posP[e]] : -1), ((i - posQ[e]) >= 0 && (i - posQ[e]) < n ? p[(i - posQ[e])] : -1));
        }

        result[i] = (pow2[e] + pow2[s]) % MOD;
    }

    for (int val : result)     cout << val << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vi p(n), q(n);
        for (int &x : p) cin >> x;
        for (int &x : q) cin >> x;
        process_case(n, p, q);
    }
    return 0;
}
