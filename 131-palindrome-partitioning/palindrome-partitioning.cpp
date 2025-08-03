class Solution {
public:
    bool isPalindrome(string &str){
        int a=0,b=str.size()-1;
        while(a<b){
            if(str[a]!=str[b]) return false;
            a++,b--;
        }
        return true;
    }
    
    void solve(string s,vector<vector<string>> &ans,vector<string> &temp,int index ){
        if(index==s.size()){
            ans.push_back(temp);
            return;
        }
        string str;
        for(int i=index;i<s.size();i++){
            str+=s[i];
            if(isPalindrome(str)){
                temp.push_back(str);
                solve(s,ans,temp,i+1);
                temp.pop_back();
                
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        
        vector<string> temp;
        solve(s,ans,temp,0);
        return ans;
        
    }
};