class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int pp=0;

        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
            pp++;
            if(pp>1)
            return false;

            }
            

            
        }
        if(nums[0]<nums[n-1])
            pp++;
        
        return pp<=1;

    }      
    
};