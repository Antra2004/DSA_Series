class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int p=-1,n=A.size();
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                p=i;
                break;
            }
        }
        if(p==-1){
            reverseArr(A,0,n-1);
            return;
        }
        for(int i=n-1;i>p;i--){
            if(A[i]>A[p]){
            swap(A[i],A[p]);
            break;
            }
        }
        reverseArr(A,p+1,n-1);
        
        
        
    }
    void reverseArr(vector<int>& arr, int i, int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
};