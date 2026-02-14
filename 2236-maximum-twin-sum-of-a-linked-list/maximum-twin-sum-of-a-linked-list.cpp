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
    int pairSum(ListNode* head) {
        ListNode* first=head;
        ListNode* second=head;
        int ans=0;
        while(second!=NULL){
            first=first->next;
            second=second->next->next;
        }
        ListNode * head2=NULL;
        while(first!=NULL){
            ListNode* temp=first;
            first=first->next;
            temp->next=head2;
            head2=temp;
        }
        while(head2!=NULL){
            ans=max(head->val+head2->val,ans);
            head=head->next;
            head2=head2->next;
        }
    
    return ans;
    }
};