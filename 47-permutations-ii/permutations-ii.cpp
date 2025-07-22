class Solution {
public:
    
    void findPerms(vector<int> nums,vector<vector<int>> & ans,vector<int> op){
        if(nums.size()==0){
            ans.push_back(op);
            return;
        }
        unordered_set<int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp.insert(nums[i]);
                vector<int> newIp=nums;
                newIp.erase(newIp.begin()+i);
                vector<int> newOp = op;
                newOp.push_back(nums[i]);
                
                
                findPerms(newIp,ans,newOp);
                            }

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        findPerms( nums, ans,op);
        return ans;
    }
};