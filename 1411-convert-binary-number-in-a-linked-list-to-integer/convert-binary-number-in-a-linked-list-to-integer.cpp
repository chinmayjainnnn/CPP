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
    int getDecimalValue(ListNode* head) {
        vector<int> num;
        while(head!=NULL){
            num.push_back(head->val);
            head=head->next;
        }
        int n=num.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans*2+num[i];
        }

        return ans;
    }
};