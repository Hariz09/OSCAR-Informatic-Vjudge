#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll N = 1e5 + 5;
const ll INF = 1e18;

int main() {
    ll n, m, u, v, w;
    vector<ll> prv(N); // Stores the previous node in the shortest path
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; // Priority queue for Dijkstra's algorithm
    vector<ll> dis(N, INF); // Stores the minimum distance from the source node to each node
    vector<vector<pair<ll, ll>>> e(N); // Adjacency list representation of the graph

    cin >> n >> m; // Read the number of nodes (n) and edges (m) from input
    for (ll i = 0; i < m; i++) {
        cin >> u >> v >> w; // Read edge information (u, v, w) from input
        e[u].push_back({v, w}); // Add the edge to the graph representation
        e[v].push_back({u, w}); // Since it's an undirected graph, add the reverse edge as well
    }

    pq.push({0, 1}); // Start from node 1 with a distance of 0
    while (!pq.empty()) {
        auto u = pq.top(); // Get the node with the minimum distance
        pq.pop();
        ll dist = u.first; // Current distance to the node
        ll node = u.second; // Current node being processed
        for (auto v : e[node]) {
            if (dist + v.second < dis[v.first]) {
                dis[v.first] = dist + v.second; // Update the minimum distance to the neighbor
                prv[v.first] = node; // Update the previous node for the neighbor
                pq.push({dis[v.first], v.first}); // Push the neighbor into the priority queue
            }
        }
    }

    if (dis[n] == INF) {
        cout << "-1\n"; // If there's no path to node n, output -1
    } else {
        vector<ll> ans;
        while (n != 1) {
            ans.push_back(n); // Add nodes to the path in reverse order
            n = prv[n]; // Move to the previous node
        }
        ans.push_back(1); // Add the source node to the path
        reverse(ans.begin(), ans.end()); // Reverse the path to get it in the correct order
        for (auto node : ans) {
            cout << node << ' '; // Output the nodes in the shortest path
        }
    }
}
