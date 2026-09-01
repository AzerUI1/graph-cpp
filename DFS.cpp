vector<vector<int>> adj_list;
int n;

vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    for (int u : adj_list[v]) {
        if (!visited[u])
            dfs(u);
    }
}
