class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int prevcount=0;
        int n=s.size();
        //cout<< n;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                prevcount=count;
                count=1;
            }
            else{
                count++;
            }
            while(s[i]==' ')i++;
            cout<<i<<" "<<count<<" "<<prevcount<<endl;

        }
        if(s[n-1]!=' '){return count;}
        return prevcount;
    }
};