class Solution {
public:
    string compressedString(string word) {
        int n=word.size(),count=1;
        string s;
        char last=word[0];
        
        for(int i=1;i<n;i++){
            if(last==word[i] && count<9 ){
                count++;
            }
            else{
                s.push_back(count+'0');
                s.push_back(last);
                count=1;
            }
            last=word[i];
        }
    s.push_back(count+'0');
    s.push_back(last);
    return s;
    }
};