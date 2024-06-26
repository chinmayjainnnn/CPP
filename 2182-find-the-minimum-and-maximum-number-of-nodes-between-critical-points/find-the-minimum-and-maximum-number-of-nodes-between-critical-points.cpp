/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int max=-1,first=-1,last=-1,min=INT_MAX;
        int i=1;
        ListNode* prev=head;
        head=head->next;
        while(head!=NULL && head->next!=NULL){
            if(  (prev->val > head-> val && head->val < head->next->val  ) || (prev->val < head-> val && head->val > head->next->val  ) ){
                if(first==-1){
                    first=i;

                }
                else if( min> (i-last )){
                    min=i-last;
                }
                last=i;

            }
            // cout<<i<<" "<<first<<" "<<last<<" "<<min<<" "<<max<<endl;
            i++;
            prev=head;
            head=head->next;
            
        }
    vector<int> ans(2,-1);
    if(first==last)return ans;
    
    max=last-first;
    ans[0]=min;
    ans[1]=max;
    return ans;
    }
};