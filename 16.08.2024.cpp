class Solution {
public:
    int maximizeTheCuts(int n, int x, int y, int z) {
        int dp[n + 1];
        memset(dp, -1, sizeof(dp));
        dp[0] = 0;

        int cuts[] = {x, y, z};

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < 3; j++) {
                if (i >= cuts[j] && dp[i - cuts[j]] != -1) {
                    dp[i] = max(dp[i], dp[i - cuts[j]] + 1);
                }
            }
        }

        return dp[n] == -1 ? 0 : dp[n];
    }
};
