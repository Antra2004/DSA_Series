class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        for(int i=0;i<chars.size();i++){
            int count=0;
            char ch=chars[i];
            while(i<chars.size() && chars[i]==ch  ){
            count ++;
            i++;
            }
           
            if(count==1){
                 chars[idx++]=ch;
            }
            else{
                chars[idx++]=ch;
                string str=to_string(count);
                for(char dig:str){
                    chars[idx++]=dig;
                }
            }
             i--;
            
        }
        chars.resize(idx);
        return chars.size();
        
    }
};