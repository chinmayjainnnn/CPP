class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> ump;

        for(int i=0;i<n;i++){
            ump[nums[i]]++;
        }
        int max=0;
        int count=0;
        for(auto i = ump.begin(); i != ump.end(); i++){
            if(max < i->second){
                max=i->second;
                count=1;
            }
            else if(max==i->second){
                count++;
            }
            cout<<max<<"  "<<count<<" "<<i->first<<" "<<i->second<<endl;
        }
    return max*count;
    }
};