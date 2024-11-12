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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *h=head;
        int last;
        ListNode *temp=head;
        while(head!=NULL){
            temp=head;
            last=head->val;
            while(head!= NULL && head->val==last){
                head=head->next;
            }
            temp->next=head;
        }
        // if(last==temp->next->val)temp->next=NULL;

        return h;
    }

};