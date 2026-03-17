class Solution {
public:
    string result = "";
    int count = 0;

    string getHappyString(int n, int k) {
        string current = "";
        backtrack(n, k, current);
        return result;
    }

    void backtrack(int n, int k, string& current) {
        // If we've already found the k-th string, stop exploring
        if (!result.empty()) return;

        // Base case: we reached the target length
        if (current.length() == n) {
            count++;
            if (count == k) {
                result = current;
            }
            return;
        }

        // Try 'a', 'b', 'c' in lexicographical order
        for (char c : {'a', 'b', 'c'}) {
            // Check if it's "happy" (doesn't match the last character)
            if (current.empty() || current.back() != c) {
                current.push_back(c);
                backtrack(n, k, current);
                current.pop_back(); // Undo move
            }
        }
    }
};