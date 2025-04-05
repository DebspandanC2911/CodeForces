#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
struct Point {
    ll x, y;
    Point(ll xx = 0, ll yy = 0) : x(xx), y(yy) {}
    
    bool operator<(const Point& other) const {
        if (x != other.x) return x < other.x;
        return y < other.y;
    }
};
Point NextLeafA(Point curr, const set<Point>& leaves) {
    Point next(LLONG_MAX, LLONG_MAX);
    ll minDist = LLONG_MAX;
    
    for (const Point& leaf : leaves) {
        if (leaf.x > curr.x && leaf.y > curr.y && 
            (leaf.x - curr.x) == (leaf.y - curr.y)) {
            ll dist = leaf.x - curr.x;
            if (dist < minDist) {
                minDist = dist;
                next = leaf;
            }
        }
    }
    
    if (minDist == LLONG_MAX){
        return curr;
    }
    return next;
}
Point NextLeafB(Point curr, const set<Point>& leaves) {
    Point next(LLONG_MAX, LLONG_MAX);
    ll minDist = LLONG_MAX;
    
    for (const Point& leaf : leaves) {
        if (leaf.x > curr.x && leaf.y < curr.y && 
            (leaf.x - curr.x) == (curr.y - leaf.y)) {
            ll dist = leaf.x - curr.x;
            if (dist < minDist) {
                minDist = dist;
                next = leaf;
            }
        }
    }
    
    if (minDist == LLONG_MAX) return curr;
    return next;
}
Point NextLeafC(Point curr, const set<Point>& leaves) {
    Point next(LLONG_MAX, LLONG_MAX);
    ll minDist = LLONG_MAX;
    
    for (const Point& leaf : leaves) {
        if (leaf.x < curr.x && leaf.y > curr.y && 
            (curr.x - leaf.x) == (leaf.y - curr.y)) {
            ll dist = curr.x - leaf.x;
            if (dist < minDist) {
                minDist = dist;
                next = leaf;
            }
        }
    }
    
    if (minDist == LLONG_MAX) return curr;
    return next;
}
Point NextLeafD(Point curr, const set<Point>& leaves) {
    Point next(LLONG_MAX, LLONG_MAX);
    ll minDist = LLONG_MAX;
    
    for (const Point& leaf : leaves) {
        if (leaf.x < curr.x && leaf.y < curr.y && 
            (curr.x - leaf.x) == (curr.y - leaf.y)) {
            ll dist = curr.x - leaf.x;
            if (dist < minDist) {
                minDist = dist;
                next = leaf;
            }
        }
    }
    
    if (minDist == LLONG_MAX) return curr;
    return next;
}

Point simulateJumps(const vector<Point>& initialLeaves, const string& commands) {
    set<Point> leaves(initialLeaves.begin(), initialLeaves.end());
    Point curr = initialLeaves[0];
    
    for (char cmd : commands) {
        Point next = curr;
        leaves.erase(curr);
        switch (cmd) {
            case 'A': next = NextLeafA(curr, leaves); break;
            case 'B': next = NextLeafB(curr, leaves); break;
            case 'C': next = NextLeafC(curr, leaves); break;
            case 'D': next = NextLeafD(curr, leaves); break;
        }
        if (next.x != LLONG_MAX) curr = next;
    }
    return curr;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, M;
    cin >> N >> M;
    
    string commands;
    cin >> commands;
    
    vector<Point> leaves;
    for (int i = 0; i < N; i++) {
        ll x, y;
        cin >> x >> y;
        leaves.push_back(Point(x, y));
    }
    
    Point final = simulateJumps(leaves, commands);
    cout << final.x << " " << final.y << "\n";
    
    return 0;
}