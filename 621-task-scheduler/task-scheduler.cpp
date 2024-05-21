class Solution {

public:
    
    int leastInterval(vector<char>& tasks, int n) {
    int m=tasks.size();
    unordered_map<char,int> count;
    unordered_map<char,int> track;
    vector<int> ans;

    for(int i=0;i<m;i++){
        count[tasks[i]]++;
    }
    for(auto i:count){
        track[i.first]= -n-1;
    }

    int j=0,max;
    char c;
    while(!count.empty()){
        max=0;
        for(auto i:count){
            if(max<i.second && (j-track[i.first])>n){
                c=i.first;
                max=i.second;
            }
        }
        // cout<<max<<" "<<c<<" "<<count[c];
        if(max>0 && count[c]==1){
            count.erase(c);
            // cout<<" one ";
        }
        else if(max>0){
            track[c]=j;
            count[c]--;
            // cout<<" two";
        }

        // cout<<endl;
        j++;
    }


    
    return j;
    }
};
