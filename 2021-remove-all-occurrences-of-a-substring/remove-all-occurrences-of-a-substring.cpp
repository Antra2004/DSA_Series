class Solution {
public:
    string removeOccurrences(string s, string part) {
       int b= part.length(); 
       while(s.find(part)<=s.length()){
       int a = s.find(part);
       s.erase(a,b);

       }
       return s;
        
    
    }
};