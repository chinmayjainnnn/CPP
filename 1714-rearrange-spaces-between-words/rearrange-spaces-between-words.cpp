class Solution {
public:
    string reorderSpaces(string s) {
    int n=s.size(),space=0;
    vector<string> vec;
    string wrd="";
    
    for(int i=0;i<n;i++){
        char c=s[i];
        if(c==' '){
            space++;
            if(!wrd.empty()){
                vec.push_back(wrd);
                wrd="";
            }
        }
        else{
            wrd+=c;
        }    
    }
    if(!wrd.empty()){
        vec.push_back(wrd);
    }
    int now=vec.size();
    s="";
    if(now==1){
        s+=vec[0];
        for(int i=0;i<space;i++){
            s+=' ';
            
        }
        return s;
    }
    int k=space/(now-1),rem=space%(now-1);
    
    for(int i=0;i<now-1;i++){
        s+=vec[i];
        for(int j=0;j<k;j++){
            s+=' ';
        }
    }
    s+=vec[now-1];
    for(int i=0;i<rem;i++){
        s+=' ';
    }





    // cout<<vec.size()<<" "<<space<<endl;
    
    
    return s;    
    }
};