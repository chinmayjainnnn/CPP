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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        ListNode* temp=head;
        ListNode* curr=head;
        ListNode* temp2=head;

        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        
        if( len==0)return head;
        len++;
        k=k%(len);
        if(k==0 )return head;
        
        for(int i=0;i<len-k-1;i++){
            curr=curr->next;
        }
        temp2=curr->next;
        curr->next=NULL;
        temp->next=head;
        return temp2;
    }
};