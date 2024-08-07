#include <iostream>
#include <vector>
using namespace std;

int count_suneet_wins(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;
    vector<vector<int>> rounds = {
        {a1, b1, a2, b2},
        {a1, b2, a2, b1},
        {a2, b1, a1, b2},
        {a2, b2, a1, b1}};
    
    for (auto r : rounds) {
        int suneet = 0;
        int slavic = 0;
        
        if (r[0] > r[1]) {
            suneet++;
        } else if (r[0] < r[1]) {
            slavic++;
        }
        
        if (r[2] > r[3]) {
            suneet++;
        } else if (r[2] < r[3]) {
            slavic++;
        }
        
        if (suneet > slavic) {
            suneet_wins++;
        }
    }
    
    return suneet_wins;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        cout << count_suneet_wins(a1, a2, b1, b2) << '\n';
    }
    
    return 0;
}
