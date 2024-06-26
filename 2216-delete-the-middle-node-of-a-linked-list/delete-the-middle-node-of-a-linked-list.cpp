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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)return NULL;
        if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        ListNode *fastnode=head->next->next;
        ListNode* slownode=head;
        while( fastnode!=NULL && fastnode->next!=NULL){
            slownode=slownode->next;
            fastnode=fastnode->next->next;
        }
        slownode->next=slownode->next->next;

        return head;
    }
};