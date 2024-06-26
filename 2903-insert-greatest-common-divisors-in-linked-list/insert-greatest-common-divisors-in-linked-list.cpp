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
    int gcd(int a,int b){
        if(a==0)return b;
        if(b==0)return a;
        if(a==b)return a;
        if(a>b)return gcd(a-b,b);
        else return gcd(a,b-a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp1=head;
        while(temp1->next!=NULL && temp1 !=NULL){
            ListNode* n=new ListNode(gcd(temp1->val,temp1->next->val));
            n->next=temp1->next;
            temp1->next=n;
            temp1=n->next;
        }
    return head;
    }
};