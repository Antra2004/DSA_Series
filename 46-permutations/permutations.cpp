
class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        // Base case: if index reaches the end, store the permutation
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Try placing each remaining element at current index
        for (int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);             // Choose
            solve(nums, ans, index + 1);            // Explore
            // No need to swap back because nums is passed by value (not reference)
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};
