class Solution {
public:
    vector<string> readBinaryWatch(int tn) {
        if(tn>8)return{};
        vector<vector<int>> hour(5);
        vector<vector<int>> min(7);
        vector<string> x;

        for(int a=0;a<2;a++){
            for(int b=0;b<2;b++){
                for(int c=0;c<2;c++){
                    for(int d=0;d<2;d++){
                        int bits=a+b+c+d;
                        int sum=8*a+4*b+c*2+d;
                        if(sum<12){
                            hour[bits].push_back(sum);
                        }
                        
                    }
                }
            }
        }
        for(int a=0;a<2;a++){
            for(int b=0;b<2;b++){
                for(int c=0;c<2;c++){
                    for(int d=0;d<2;d++){
                        for(int e=0;e<2;e++){
                            for(int f=0;f<2;f++){
                                int bits=a+b+c+d+e+f;
                                int sum=32*a+16*b+8*c+4*d+2*e+f;
                                if(sum<60){
                                    min[bits].push_back(sum);
                                }
                            }
                        }
                    }
                }
            }
        } 
        for(int m=0;m<=tn;m++){
            int h=tn-m;
            if(h>4||m>6){continue;}
            for(auto minute:min[m]){
                for(auto hours:hour[h]){
                    string ans=to_string(hours)+":";
                    if(minute<10){
                        ans+="0";
                    }
                    ans+=to_string(minute);
                    x.push_back(ans);
                }
            }

        }


        return x;
    }
};