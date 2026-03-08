class Solution {
public:

    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            string s=nums[i];
            int temp=0;
            for(int j=0;j<n;j++){
                if(s[j]=='1'){
                    temp=temp*2+1;
                }
                else{
                    temp=temp*2;
                }                
            }
            st.insert(temp);
        }
        int t=0;
        while(1){
            if(st.find(t)==st.end()){
                break;
            }
            t++;
        }
        string s(n,'0');
        for(int i=n-1;i>=0;i--){
            if(t%2){
                s[i]='1';
            }
            t=t/2;
        }
        return s;
    }
};