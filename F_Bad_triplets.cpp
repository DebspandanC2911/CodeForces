#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    vector<vector<int>> graph;
    vector<vector<int>> triplets;
    int N;
    
    // Check if the path contains any forbidden triplet
    bool containsForbiddenTriplet(const vector<int>& path) {
        if (path.size() < 3) return false;
        
        // For each triplet
        for (const auto& triplet : triplets) {
            // Create a map of positions for the current path
            unordered_map<int, int> positions;
            for (int i = 0; i < path.size(); i++) {
                positions[path[i]] = i;
            }
            
            // Check if all cities in triplet exist in path
            if (positions.count(triplet[0]) && positions.count(triplet[1]) && 
                positions.count(triplet[2])) {
                // Get positions
                vector<int> pos = {
                    positions[triplet[0]],
                    positions[triplet[1]],
                    positions[triplet[2]]
                };
                // Sort positions
                sort(pos.begin(), pos.end());
                // If they appear in order (after sorting), triplet is violated
                if (pos[1] - pos[0] == 1 && pos[2] - pos[1] == 1) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    void solve() {
        int M, K;
        cin >> N >> M >> K;
        
        // Initialize graph
        graph.resize(N + 1, vector<int>(N + 1, 0));
        
        // Read flights
        for (int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;
            graph[u][v] = graph[v][u] = 1;
        }
        
        // Read triplets
        for (int i = 0; i < K; i++) {
            vector<int> triplet(3);
            cin >> triplet[0] >> triplet[1] >> triplet[2];
            triplets.push_back(triplet);
        }
        
        // BFS queue will store {city, path_to_city}
        queue<pair<int, vector<int>>> q;
        vector<int> initial = {1};  // Start from city 1
        q.push({1, initial});
        
        // Keep track of visited states to avoid cycles
        set<vector<int>> visited;
        visited.insert(initial);
        
        // Store the shortest valid path found
        vector<int> shortestPath;
        
        while (!q.empty()) {
            int current = q.front().first;
            vector<int> path = q.front().second;
            q.pop();
            
            // If we reached the destination
            if (current == N && !containsForbiddenTriplet(path)) {
                shortestPath = path;
                break;
            }
            
            // Try all possible next cities
            for (int next = 1; next <= N; next++) {
                if (graph[current][next] == 0) continue;  // No direct flight
                
                // Create new path by adding next city
                vector<int> newPath = path;
                newPath.push_back(next);
                
                // Skip if this path was already tried or contains forbidden triplet
                if (visited.count(newPath) || containsForbiddenTriplet(newPath)) {
                    continue;
                }
                
                visited.insert(newPath);
                q.push({next, newPath});
            }
        }
        
        // Output result
        if (shortestPath.empty()) {
            cout << -1 << endl;
        } else {
            cout << shortestPath.size() << endl;
            for (int city : shortestPath) {
                cout << city << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Solution solution;
    solution.solve();
    
    return 0;
}