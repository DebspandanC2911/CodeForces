#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Lamp {
    ll x, y, r;
};
bool circlesOverlap(const Lamp& a, const Lamp& b) {
    ll dx = a.x - b.x;
    ll dy = a.y - b.y;
    ll sumR = a.r + b.r;
    return dx * dx + dy * dy <= sumR * sumR;
}
bool pointInCircle(ll x, ll y, const Lamp& lamp) {
    ll dx = x - lamp.x;
    ll dy = y - lamp.y;
    return dx * dx + dy * dy <= lamp.r * lamp.r;
}
vector<int> findOverlaps(int curr, const vector<Lamp>& lamps) {
    vector<int> overlaps;
    for (int i = 0; i < lamps.size(); i++) {
        if (i != curr && circlesOverlap(lamps[curr], lamps[i])) {
            overlaps.push_back(i);
        }
    }
    return overlaps;
}
bool dfs(int curr, vector<bool>& visited, const vector<vector<int>>& graph,const vector<Lamp>& lamps, ll M) {
    visited[curr] = true;
    if (lamps[curr].x + lamps[curr].r >= M) {
        return true;
    }
    for (int next : graph[curr]) {
        if (!visited[next] && dfs(next, visited, graph, lamps, M)) {
            return true;
        }
    }
    return false;
}
bool solvePath(ll M, vector<Lamp>& lamps) {
    int N = lamps.size();
    vector<vector<int>> graph(N);
    for (int i = 0; i < N; i++) {
        graph[i] = findOverlaps(i, lamps);
    }
    vector<bool> visited(N);
    for (int i = 0; i < N; i++) {
        if (lamps[i].x - lamps[i].r <= 0) {  // Lamp touches x=0
            fill(visited.begin(), visited.end(), false);
            if (dfs(i, visited, graph, lamps, M)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll M, N;
        cin >> M >> N;
        
        vector<Lamp> lamps(N);
        for (int i = 0; i < N; i++) {
            cin >> lamps[i].x >> lamps[i].y >> lamps[i].r;
        }
        
        cout << (solvePath(M, lamps) ? "YES" : "NO") << '\n';
    }
    
    return 0;
}

