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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode* first;
        ListNode* temp=head;
        while(temp !=NULL){
            len++;   
            if(len==k){
                first=temp;
            }
            temp=temp->next;
        }
        k=len-k;
        temp=head;
        while(k--){
            temp=temp->next;
        }
        swap(temp->val,first->val);
        return head;       
    }
};
