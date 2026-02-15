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
        vector<int> ans={-1,-1};
        ListNode* prev=head;
        ListNode* next=NULL;
        ListNode* cur=head->next;
        int first=0,last=0,mini=INT_MAX;
        int count=0;

        while(cur->next!=NULL){
            count++;
            next=cur->next;
            int b=cur->val,a=prev->val,c=next->val;
            if((b>a && b>c) || (b<a && b<c)  ){
                if(!first)first=count;
                else{
                    mini=min(mini,count-last);
                }
                last=count;
            }
            prev=cur;
            cur=next;
        }
        if(mini!=INT_MAX){
            ans={mini,last-first};
        }

        return ans;
    }
};