class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int ans;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
            ans=nums[i];
            break;

        }
        s.insert(nums[i]);
        
    }
    return ans;
    }
};