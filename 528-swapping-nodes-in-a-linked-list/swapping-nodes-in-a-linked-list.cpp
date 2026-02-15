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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int len=0;
        ListNode* first;
        ListNode* temp=head;
        while(temp !=NULL){
            len++;   
            if(len==k){
                first=temp;
            }
            temp=temp->next;
        }
        k=len-k;
        temp=head;
        while(k--){
            temp=temp->next;
        }
        swap(temp->val,first->val);
        return head;       
    }
};

// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         int count=0;
//         ListNode* temp=head;
//         ListNode* kthb=nullptr;
//         ListNode* kthe=nullptr;
//         while(temp!=nullptr){
//             count++;
//             if(count==k){
//                 kthb=temp;
//             }
//             temp=temp->next;
//         }
//         int point=count-k+1,c=0;
//         temp=head;
//         while(temp!=nullptr){
//             c++;
//             if(c==point){
//                 kthe=temp;
//             }
//             temp=temp->next;
//         }
//         int t=kthb->val;
//         kthb->val=kthe->val;
//         kthe->val=t;
//         return head;
//     }
// };