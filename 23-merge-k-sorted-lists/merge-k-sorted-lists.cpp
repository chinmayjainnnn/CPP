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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        priority_queue<int> pq;

        ListNode* tem;
        for(int i=0;i<n;i++){
            ListNode *temp=lists[i];
            while(temp!=NULL){
                pq.push(temp->val);
                temp=temp->next;
                
            }
        }
       
        n=pq.size();
        ListNode* head = NULL,*prev=NULL;
        
        while(!pq.empty()){
            if(head==NULL){
                head=new ListNode(pq.top());   
                pq.pop();            
            }
            else{
                prev=new ListNode(pq.top());
                prev->next=head;
                head = prev;
                head->val=pq.top();
                pq.pop();
                
                // head=prev;
            }
            

        }

        return head;
    }
};