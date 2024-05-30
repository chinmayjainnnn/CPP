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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        
        ListNode* even=head;
        ListNode* odd=head->next;
        ListNode* temp2=odd;
        while(odd->next!=NULL && odd->next->next!=NULL){
            even->next=odd->next;
            even=even->next;
            odd->next=even->next;
            odd=odd->next;
            
        }
        
        if(odd->next!=NULL){
            even->next=odd->next;
            even=even->next;
            odd->next=NULL;
        }
        
        even->next=temp2;
        
        return head;  
    }
};