class Solution {
public:
    int countPrimes(int n) {
        int a[n+1];
        int count=0;
        memset(a,0,sizeof(a));

        int i=2;
        
        while(i<=n){
            if(a[i]==0){
                
                for(int j=2*i;j<=n;j=j+i){
                    a[j]=1;
                    
                }
                    
            }
            i++;
            
        }
        for(int i=2;i<n;i++){
            //print(a[i])
            if(a[i]==0)count++;
        }
    
    return count;
    }
};