class Solution {
public:
int bs(vector<int> arr, int target, int st, int en){
    int mid=st+(en-st)/2;
    if(st<=en){
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) return bs(arr,target,st,mid-1);
        else  return bs(arr,target,mid+1,en);
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size()-1);
        
    }
};