vector<vector<long long>> list_to_matrix(const vector<vector<long long>>& adj_list, long long n) {
    vector<vector<long long>> adj_mat(n + 1, vector<long long>(n + 1, 0));
    for (long long i = 1; i <= n; i++) {
        for (long long j : adj_list[i]) {
            adj_mat[i][j] = 1;
        }
    }
    return adj_mat;
}  
