class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char ans='z'+1;
        for(int i=0;i<n;i++){
            if(letters[i]>target && ans>letters[i]){
                ans=letters[i];
            }
        }
        if(ans=='z'+1)return letters[0];
        return ans;
    }
};