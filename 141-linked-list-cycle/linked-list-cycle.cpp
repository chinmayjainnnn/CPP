/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        while(head!=NULL && head->next!=NULL  ){
            temp=temp->next;
            head=head->next->next;
            if(temp==head)return 1;
        }

    return 0;
    }
};