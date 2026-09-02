vector<vector<long long>> input_adj_matrix(long long n) {
    vector<vector<long long>> a(n + 1, vector<long long>(n + 1));
    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= n; j++) {
            cin >> adj_mat[i][j];
        }
    }
    return a;
}
