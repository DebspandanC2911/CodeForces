#include<bits/stdc++.h>
using namespace std;
int solve_shortest_path(int N, int M, int source, int target,vector<int>& cursed, vector<vector<int>>& graph){
    if (cursed[source] || cursed[target]) {
        return -1;
    }
    vector<bool> visited(N, false);
    queue<pair<int, int>> q;    
    q.push({source, 0});
    visited[source] = true;    
    while (!q.empty()) {
        int current = q.front().first;
        int distance = q.front().second;
        q.pop();        
        if (current == target) {
            return distance;
        }        
        for (int next_city : graph[current]) {
            if (!visited[next_city] && !cursed[next_city]) {
                visited[next_city] = true;
                q.push({next_city, distance + 1});
            }
        }
    }    
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    int N, M;
    cin >> N >> M;    
    int source, target;
    cin >> source >> target;
    vector<int> cursed(N);
    for (int i = 0; i < N; i++) {
        cin >> cursed[i];
    }
    vector<vector<int>> graph(N);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int result = solve_shortest_path(N, M, source, target, cursed, graph);
    cout << result << '\n';
    return 0;
}