#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, weight;
};

struct Subset {
    int parent, rank;
};

int find(vector<Subset>& subsets, int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void Union(vector<Subset>& subsets, int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int specialSubTreeWeight(vector<Edge>& edges, int n) {
    sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) {
        return a.weight < b.weight || (a.weight == b.weight && a.u + a.v + a.weight < b.u + b.v + b.weight);
    });

    vector<Subset> subsets(n);
    for (int i = 0; i < n; ++i) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }

    int weight = 0;
    for (const Edge& edge : edges) {
        int u = edge.u;
        int v = edge.v;
        int uroot = find(subsets, u);
        int vroot = find(subsets, v);

        cout << "Edge: " << u << " " << v << " " << edge.weight << endl;
        cout << "Roots: " << uroot << " " << vroot << endl;

        if (uroot != vroot) {
            Union(subsets, uroot, vroot);
            weight += edge.weight;
            cout << "Adding weight: " << edge.weight << endl;
        }
    }

    return weight;
}

int main() {
    int n = 3; 
    vector<Edge> edges = {{1, 2, 2}, {2, 3, 3}, {3, 1, 5}};

    int result = specialSubTreeWeight(edges, n);
    cout << "Weight of Really Special SubTree: " << result << endl;

    return 0;
}


