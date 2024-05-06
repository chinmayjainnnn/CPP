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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int i=0;
        ListNode* s;
        ListNode* e;
        ListNode* t=NULL;
        s=head;
        e=head;
        while( e->next!=NULL  &&(i<n)){
            e=e->next;  
            i++;
        }
        if(i!=n){
            return head-> next;
        }
        while(e->next!=NULL){
            s=s->next;
            e=e->next;
        }
        if(s->next!=NULL){
            s->next=s->next->next;
        }
        else{
            return t;
        }
        cout<< e->val<<endl;
        cout<< s->val;


        return head;
    }
};