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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        if(n>count){
            return NULL;
        }
        if(count-n==0){
            head=head->next;
            return head;
        }
        ListNode* pre=head;
        temp=head;

        for(int i=0;i<count-n;i++){
            pre=temp;
            temp=temp->next;
        }
        pre->next=temp->next;
        return head;
    }
};