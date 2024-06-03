class Solution {
public:
    vector<int> countBits(int n) {
    if(n==0)return {0};
    vector<int> v;
    v.push_back(0);
    
    v.push_back(1);

    int temp=2;
    

    for(int i=2;i<=n;i++){
        if(i==temp*2){
            temp=temp*2;
        }
        
        v.push_back(v[i-temp]+1);

    }
    
    return v;
    }
};