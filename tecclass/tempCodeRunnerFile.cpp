#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxWeightNode(int N, vector<vector<int>>& edges) {
    vector<int> weights(N, 0);
    
    for(int i = 0; i < N; ++i) {
        for(int j : edges[i]) {
            weights[j] += i;
        }
    }
    
    int maxWeight = *max_element(weights.begin(), weights.end());
    return find(weights.begin(), weights.end(), maxWeight) - weights.begin();
}

int main() {
    int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        
        vector<vector<int>> edges(N, vector<int>());
        
        for(int i = 0; i < N; ++i) {
            int num;
            char c;
            cin >> num;
            while(cin >> c && c != '\n') {
                edges[i].push_back(num);
                if(!isdigit(c)) break;
                cin.putback(c);
                cin >> num;
            }
        }
        
        cout << findMaxWeightNode(N, edges) << endl;
    }
    
    return 0;
}