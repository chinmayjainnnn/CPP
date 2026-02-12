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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int len=0,ans=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        
        len--;
        while(head!=NULL){
            ans+=head->val*pow(2,len);
            len--;
            head=head->next;
        }
    return ans;
    }
};