class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(!mp[n]){
            mp[n]=1;
            int m=0;
            while(n){
                int t=n%10;
                m+=t*t;
                n=n/10;

            }
            if(m==1)return 1;
            cout<<m<<endl;
            
            n=m;

        }
        return 0;
    }
};