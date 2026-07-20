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
        if(head==NULL) return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        for(int i=0;i<n;i++){
            curr=curr->next;
        }
        if(!curr) return head->next;
        while(curr){
            curr=curr->next;
            if(prev){
             prev=prev->next;
            }else{
                prev=head;
            }
        }
        prev->next=prev->next->next;
        return head;

    }
};