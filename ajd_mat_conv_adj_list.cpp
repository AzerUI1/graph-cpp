vector<vector<long long>> matrix_to_list(const vector<vector<long long>>& a, long long n) {
    vector<vector<long long>> adj(n + 1);
    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= n; j++) {
            if (adj_mat[i][j] == 1) {
                adj_list[i].push_back(j);
            }
        }
    }
    return adj;
}
