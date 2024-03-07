#include <bits/stdc++.h>
using namespace std;
//1st
long long largestSumCycle(int n, vector<int> edge) {
    vector<int> cnt(n, 0);
    for (auto i : edge) {
        if (i != -1) cnt[i]++;
    }
    
    queue<int> q;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++) {
        if (cnt[i] == 0) {
            vis[i] = 1;
            q.push(i);
        }
    }
    
    while (!q.empty()) {
        int node = q.front(); 
        q.pop();
        if (edge[node] == -1) continue;
        --cnt[edge[node]];
        if (cnt[edge[node]] == 0) {
            vis[edge[node]] = 1;
            q.push(edge[node]);
        }
    }
    
    long long ans = -1;
    
    for (int i = 0; i < n; i++) {
        if (vis[i]) continue;
        long long val = 0;
        for (int st = i; vis[st] == 0; st = edge[st]) {
            vis[st] = 1;
            val += st;
        }
        ans = max(ans, val);
    }
    
    return ans;
}

void solution_function() {
    int n;
    cin >> n;

    vector<int> edges(n);
    for (int i = 0; i < n; ++i) {
        cin >> edges[i];
    }

    long long result = largestSumCycle(n, edges);
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution_function();
    }
    return 0;
}
