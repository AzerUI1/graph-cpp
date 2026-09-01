vector<vector<long long>> input_adj_list(long long n, long long m) {
    vector<vector<long long>> adj(n + 1);
    for (long long i = 0; i < m; i++) {
        long long u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return adj;
}
