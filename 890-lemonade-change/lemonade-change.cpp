class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,twenty=0,n=bills.size();

        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
                
            }
            else if(bills[i]==10 && five){
                five--;
                ten++;
                }
            else if(bills[i]==20 && five && ten  ){
                    five--;
                    ten--;
                    twenty++;
            }
            else if(bills[i]==20 && five>=3){
                twenty++;
                five=five-3;
            }
            else{
                return false;
                
            }             
        }
    return true;
    }
};