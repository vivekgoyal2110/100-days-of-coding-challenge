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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=NULL){
            temp = temp -> next;
            count++;
        }
        temp = head;
        if(count%2!=0){
            for(int i = 1; i < (count/2)+1; i++){
                temp = temp -> next;
            }
            return temp;
        }
        else{
            for(int i = 1; i < (count/2)+1; i++){
                temp = temp -> next;
            }
            return temp;
        }
        return {};
    }
};