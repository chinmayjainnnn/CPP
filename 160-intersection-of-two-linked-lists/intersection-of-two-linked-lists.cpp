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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        ListNode* b=headB;
        unordered_map<ListNode*,bool > mp;
        while(a!=NULL){
            mp[a]=1;
            a=a->next;
        }
        while(b!=NULL){
            if(mp[b]==1){return b;}
            b=b->next;
        }

    return NULL;}
};