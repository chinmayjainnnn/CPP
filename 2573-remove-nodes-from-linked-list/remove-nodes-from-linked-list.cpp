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
    ListNode* reverselist(ListNode* head){
        if(head->next==NULL)return head;
        ListNode* cur=head;
        ListNode* next=head->next;
        ListNode* prev=NULL;

        while(next!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(head->next==NULL)return head;
        ListNode* newhead=reverselist(head);
        head=newhead;
        int max=head->val;
        while(head->next!=NULL && head!=NULL){
            // cout<<"val="<<head->val<<endl;
            // cout<<"max="<<max<<endl;
            if(head->next->val<max){
                head->next=head->next->next;

            }
            else{
                max=head->next->val;
                head=head->next;
            }
        }

    return reverselist(newhead);
    }
};