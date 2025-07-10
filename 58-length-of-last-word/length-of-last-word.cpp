class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,last=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' ){
                if(count)last=count;
                count=0;
                
            }
            else count++;
        }
        if(count) return count;
        return last;
        
    }
    
};