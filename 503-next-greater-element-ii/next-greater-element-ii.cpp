class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        vector<int> ans(nums.size(),-1);
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && s.top()<=nums[i]){
            s.pop();
            }
            if(s.size()==0) ans[i]=-1;
            else ans[i]=s.top();
            s.push(nums[i]);
        }
        return ans;
        
    }
};