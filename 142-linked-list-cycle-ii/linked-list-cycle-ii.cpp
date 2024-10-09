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
    ListNode *detectCycle(ListNode *head) {
    if(head==NULL|| head->next==NULL)return NULL;
    if(head==head->next->next)return head;
    ListNode *h1=head->next,*h2=head->next->next;
    

    while((h1!=NULL && h2!=NULL) &&(h2->next!=NULL) &&(h1!=h2)){
        h1=h1->next;
        h2=h2->next->next;
        // cout<< h1->val <<endl;
    }
    if(h1==NULL || h2==NULL||h2->next==NULL)return NULL;
    h1=head;
    while(h1!=h2){
        h2=h2->next;
        h1=h1->next;
        // cout<<h1->val <<endl;
    }

    return h1;}
};