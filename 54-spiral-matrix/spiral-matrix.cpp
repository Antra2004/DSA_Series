class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int sr=0,er=m-1,sc=0,ec=n-1;
        vector<int> ans;
        while(sr<=er && sc<=ec){
            for(int j=sc;j<=ec;j++){
                ans.push_back(mat[sr][j]);
            }
            for(int j=sr+1;j<=er;j++){
                ans.push_back(mat[j][ec]);
            }
            for(int j=ec-1;j>=sc;j--){
                if(sr==er)
                break;
                ans.push_back(mat[er][j]);
            }
            for(int j=er-1;j>=sr+1;j--){
                if(sc==ec)
                break;
                ans.push_back(mat[j][sc]);
            }
            sr++,er--,sc++,ec--;

        }
        return ans;

        
    }
};