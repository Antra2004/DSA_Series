class Solution {
public:
bool rowSearch(vector<vector<int>>& mat, int target, int mR)
{
     int m=mat.size(),n=mat[0].size();
     int s=0,e=n-1;
     while(s<=e){
        int mC=s+(e-s)/2;
        if(mat[mR][mC]==target){
            return true;
        }
        else if(target>mat[mR][mC])
        s=mC+1;
        else
        e=mC-1;

     }
     return false;
     
}
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int sR=0,eR=m-1;
        while(sR<=eR){
            int mR=sR+(eR-sR)/2;
            if(mat[mR][0]<=target&& target<=mat[mR][n-1]){
                return rowSearch(mat,target,mR);

            }
            else if(target>=mat[mR][n-1]){
                sR=mR+1;
            }
            else
            eR=mR-1;

        }
        return false;
        
    }
};