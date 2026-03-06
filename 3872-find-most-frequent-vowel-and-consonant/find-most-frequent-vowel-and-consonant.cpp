class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vowels;
        unordered_map<char,int> con;
        for(char &c:s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vowels[c]+=1;
            }
            else{
                con[c]+=1;
            }
        }
        int max1=0;
        for(auto i:vowels){
            max1=max(max1,i.second);
        }
        int max2=0;
        for(auto i:con){
            max2=max(max2,i.second);
        }
        return max2+max1;

    }
};