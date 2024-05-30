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
    bool isPalindrome(ListNode* head) {
        
        ListNode* rev=new ListNode(head->val);
        ListNode* temp=head;
        rev->next=NULL;
        while(temp!=NULL && temp->next !=NULL){
            temp=temp->next;
            ListNode* t=new ListNode(temp->val);
            t->next=rev;
            rev=t;
        }
        while(head!=NULL){
            if(head->val!=rev->val){
                return 0;
            }
            head=head->next;
            rev=rev->next;
        }
    return 1;}
};