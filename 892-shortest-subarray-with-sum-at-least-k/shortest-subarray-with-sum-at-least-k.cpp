#include <vector>
#include <deque>
#include <algorithm> // For std::min

class Solution {
public:
    // Function to find the length of shortest subarray with sum at least K
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        // Prefix sum array with an extra slot for ease of calculations
        vector<long> prefixSum(n + 1, 0);
        // Calculate the prefix sums
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
      
        // Double ended queue to store indices of the prefix sums
        deque<int> indices;
        // Initialize the answer with maximum possible length + 1
        int minLength = n + 1;
      
        // Loop through all prefix sum entries
        for (int i = 0; i <= n; ++i) {
            // If the current subarray (from front of deque to i) has sum >= k
            while (!indices.empty() && prefixSum[i] - prefixSum[indices.front()] >= k) {
                // Update the minimum length
                minLength = min(minLength, i - indices.front());
                // Pop the front index since we found a shorter subarray ending at index i
                indices.pop_front();
            }
            // While the last index in the deque has a prefix sum larger than or equal to current
            // we can discard it, since better candidates for subarray start are available
            while (!indices.empty() && prefixSum[indices.back()] >= prefixSum[i]) {
                indices.pop_back();
            }
            // Add current index to the deque
            indices.push_back(i);
        }
      
        // If no valid subarray is found, minLength remains > n. Return -1 in that case.
        return minLength > n ? -1 : minLength;
    }
};