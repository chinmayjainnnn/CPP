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
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr;
        ListNode* prev;
        ListNode* nex;
        prev=NULL;
        curr=head;
        nex=curr->next;
        while(nex!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nex;
            nex=curr->next;
        }
        curr->next=prev;
        
        
        nex=curr;
        prev=curr;
        int max=0;
        while(curr!=NULL){
            if(curr->val <prev->val){
                prev->next=curr->next;
            }
            else{
                prev=curr;
            }
            curr=curr->next;
            
        }
        // head=curr;
        prev=NULL;
        curr=nex;
        nex=curr->next;
        while(nex!=NULL){
            curr->next=prev;
            prev=curr;
            curr=nex;
            nex=curr->next;
        }
        curr->next=prev;
    return curr;
    }
};