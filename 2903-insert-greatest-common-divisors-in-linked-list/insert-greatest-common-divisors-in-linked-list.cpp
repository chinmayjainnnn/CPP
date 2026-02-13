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
    int GCD(int a,int b){
        if(b==0){
            return a;
        }
        return GCD(b,a%b);
    }
     
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* next=head->next;
        ListNode* curr=head;
        
        while(next!=NULL){
            int gcd=GCD(curr->val,next->val);
            ListNode* temp= new ListNode(gcd,next);
            curr->next=temp;
            curr=next;
            next=next->next;
        }        
        return head;
    }
};