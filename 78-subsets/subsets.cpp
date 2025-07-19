class Solution {
public:
    void sub(vector<int>& arr, vector<int>& ans,int i,vector<vector<int>> & allSub ){
        if(i==arr.size()){
            allSub.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        sub(arr,ans,i+1,allSub);
        ans.pop_back();
        sub(arr,ans,i+1,allSub);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSub;
        vector<int> ans;
        sub(nums,ans,0,allSub);
        return allSub;

        
    }
};