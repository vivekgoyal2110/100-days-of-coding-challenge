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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr) return head;
        if(head-> next==nullptr) return head-> next;

        int size=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            temp=temp-> next;
            size++;
        }
        temp=head;
        for(int i=1;i<size/2;i++){
            temp=temp-> next;
        }
        temp-> next = temp-> next-> next;
        
        return head;
    }
};