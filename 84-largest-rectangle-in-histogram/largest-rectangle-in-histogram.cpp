class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        vector<int> ans(heights.size());
vector<int> ans1(heights.size());

        int maxArea=0;
        for(int i=0;i<heights.size();i++){
            while(s.size()>0&&heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.empty()) ans[i]=-1;
             else ans[i]=s.top();
            s.push(i);
        }
        while(!s.empty()) s.pop();
        for(int i=heights.size()-1;i>=0;i--){
            while(s.size()>0&& heights[s.top()]>=heights[i])
            s.pop();
            if(s.empty()) ans1[i]=heights.size();
            else ans1[i]=s.top();
            s.push(i);
        }
        for(int i=0;i<heights.size();i++){
           int currArea=heights[i]*(ans1[i]-ans[i]-1);
            maxArea=max(currArea,maxArea);

        }
        return maxArea;
        
    }
};