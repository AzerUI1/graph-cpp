// Easy Version
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

// Advanced Version
vector<vector<int>> adj;
int n;

vector<int> color;

vector<int> time_in, time_out;
int dfs_timer = 0;

void dfs(int v) {
    time_in[v] = dfs_timer++;
    color[v] = 1;
    for (int u : adj[v])
        if (color[u] == 0)
            dfs(u);
    color[v] = 2;
    time_out[v] = dfs_timer++;
}
