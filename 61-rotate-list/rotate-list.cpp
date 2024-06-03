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
    
    int n=0;
    ListNode* temp=head;
    ListNode* temp1=head;
    ListNode* temp2=head;

    while(temp1!=NULL && temp1->next!=NULL){
        n++;
        temp1=temp1->next;
    }
    if(n==0)return head;
    k=k%(n+1);
    if(k==0)return head;
    while(n-k>0 ){
        temp=temp->next;
        n--;
    }

    temp2=temp->next;
    temp->next=NULL;
    temp1->next =head;
    return temp2;
    }
};