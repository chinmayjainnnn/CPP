class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        int sym=1;
        long ans=0,frac=0,m=10;
        unordered_map<char,long> mp;
        mp['0']=0;
        mp['1']=1;
        mp['2']=2;
        mp['3']=3;
        mp['4']=4;
        mp['5']=5;
        mp['6']=6;
        mp['7']=7;
        mp['8']=8;
        mp['9']=9;

        while(s[i]==' ')
            i++;
        if(s[i]=='+'){
            sym=1;
            i++;
        }
        else if(s[i]=='-'){
            sym=-1;
            i++;
        }
            
        
            

        while(i<n  ){  
            if(s[i]<'0' || s[i]>'9' || ans<INT_MIN || ans>INT_MAX){
                break;
            }
            ans=ans*10+mp[s[i]];
            i++;
            
            
        }
        cout<<ans<<endl;
        if(i<n  && s[i]=='.'){
            i++;
            while(i<n  ){
                if(s[i]<'0' || s[i]>'9' || (ans+frac)<INT_MIN || (ans+frac)>INT_MAX)
                    break;
                
                frac=frac+mp[s[i]]/m;
                m=m*10;
                i++;  
            }
        }
    if(sym*(ans+frac)<INT_MIN )return INT_MIN;
    if(sym*(ans+frac)>INT_MAX )return INT_MAX;
    return sym*(ans+frac);    
    }
};