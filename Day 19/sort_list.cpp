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
    ListNode* sortList(ListNode* head) {
        vector<int>vec1;
    ListNode*temp= head;
    while(temp!=NULL){
vec1.push_back(temp->val);
temp= temp->next;
    }
    sort(vec1.begin(),vec1.end());
    ListNode*curr= head;
   for(int i=0;i<vec1.size();i++){
       curr->val=vec1[i];
       curr= curr->next;
   }
   return head;
    }
};