#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
//2nd
#define INF INT_MAX

vector<long long> Dijkstra(vector<vector<int>>& adj, int s)
{
    priority_queue<pair<long, long>, vector<pair<long, long>>, greater<pair<long, long>>> pq;
    int v = adj.size();
    vector<long long> ans(v, INF);
    ans[s] = 0;
    pq.push({0, s});
    while (!pq.empty())
    {
        long long dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto i : adj[node])
        {
            if (dist + 1 < ans[i])
            {
                ans[i] = dist + 1;
                pq.push({dist + 1, i});
            }
        }
    }
    return ans;
}

int minimumWeight(int n, vector<int>& edges, int C1, int C2)
{
    vector<vector<int>> graph(n);
    for (int i = 0; i < n; i++)
    {
        if (edges[i] != -1)
            graph[i].push_back(edges[i]);
    }

    vector<long long> A(n, INF), B(n, INF);

    A = Dijkstra(graph, C1);
    B = Dijkstra(graph, C2);

    int node = -1;
    long long dist = INF;
    for (int i = 0; i < n; ++i)
    {
        if (A[i] == INF || B[i] == INF)
            continue;
        if (dist > A[i] + B[i])
        {
            dist = A[i] + B[i];
            node = i;
        }
    }
    return node;
}

void solution_function() {
    int n;
    cin >> n;

    vector<int> edges(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> edges[i];
    }

    int C1, C2;
    cin >> C1 >> C2;

    int nearestMeetingCell = minimumWeight(n, edges, C1, C2);
    cout << nearestMeetingCell << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solution_function();
    }
    return 0;
}
