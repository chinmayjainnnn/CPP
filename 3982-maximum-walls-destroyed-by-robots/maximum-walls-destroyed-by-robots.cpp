class Solution {
public:
    int maxWalls(vector<int>& robots, vector<int>& distance, vector<int>& walls) {
        int n = robots.size();
        if (n == 0) return 0;

        sort(walls.begin(), walls.end());

        vector<pair<int,int>> vp;
        for(int i = 0; i < n; i++) vp.push_back({robots[i], distance[i]});
        sort(vp.begin(), vp.end());

        // FIX: Changed to long long to prevent pos + d or pos - d from overflowing
        vector<vector<long long>> intervals(n, vector<long long>(4));

        for(int i = 0; i < n; i++){
            long long pos = vp[i].first;
            long long d = vp[i].second;

            long long left_block = (i > 0 ? vp[i-1].first : LLONG_MIN);
            long long right_block = (i < n - 1 ? vp[i+1].first : LLONG_MAX);

            intervals[i][0] = max(pos - d, left_block);
            intervals[i][1] = pos;
            intervals[i][2] = pos;
            intervals[i][3] = min(pos + d, right_block);
        }

        auto getCount = [&](long long l, long long r){
            // FIX: Prevent negative returns when lower bound > upper bound
            if (l > r) return 0; 
            auto it1 = lower_bound(walls.begin(), walls.end(), l);
            auto it2 = upper_bound(walls.begin(), walls.end(), r);
            return (int)(it2 - it1);
        };

        vector<vector<int>> dp(n, vector<int>(2, 0));

        dp[0][0] = getCount(intervals[0][0], intervals[0][1]);
        dp[0][1] = getCount(intervals[0][2], intervals[0][3]);

        for(int i = 1; i < n; i++){
            long long l1 = intervals[i][0], r1 = intervals[i][1];
            long long l2 = intervals[i][2], r2 = intervals[i][3];

            long long prev_r_left = intervals[i-1][1];
            long long prev_r_right = intervals[i-1][3];

            // LEFT
            // FIX: Added + 1 to prev_r to avoid double-counting walls on the exact boundary
            int addL_from_left = getCount(max(l1, prev_r_left + 1), r1);
            int addL_from_right = getCount(max(l1, prev_r_right + 1), r1);

            dp[i][0] = max(
                dp[i-1][0] + addL_from_left,
                dp[i-1][1] + addL_from_right
            );

            // RIGHT
            // FIX: Added + 1 to prev_r to avoid double-counting walls on the exact boundary
            int addR_from_left = getCount(max(l2, prev_r_left + 1), r2);
            int addR_from_right = getCount(max(l2, prev_r_right + 1), r2);

            dp[i][1] = max(
                dp[i-1][0] + addR_from_left,
                dp[i-1][1] + addR_from_right
            );
        }

        return max(dp[n-1][0], dp[n-1][1]);
    }
};