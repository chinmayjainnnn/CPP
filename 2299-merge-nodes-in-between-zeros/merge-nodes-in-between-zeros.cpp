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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* next=head->next->next;
        ListNode* curr=head->next;
        head=curr;
        int sum=0;
        while(next!=NULL){
            if(next->val==0){
                curr->val+=sum;
               if(next->next==NULL){
                curr->next=NULL;
                return head;
               }
               curr->next=next->next;
               curr=curr->next;
               next=curr->next;
               sum=0;

            }
            else{
                sum+=next->val;
                next=next->next;
            }
        }
        return head;
    }
};