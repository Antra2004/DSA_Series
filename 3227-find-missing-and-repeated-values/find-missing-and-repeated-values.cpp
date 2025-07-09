class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int a=0;
        int expSum=0,ActSum=0;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ActSum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        expSum=(n*n) * (n*n +1)/2;
        int b=expSum-ActSum+a;
        ans.push_back(b);
        return ans;
        
    }
};