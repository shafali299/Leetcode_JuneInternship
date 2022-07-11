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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(head==NULL)
            return head;
        
        ListNode *ksize=head;
        for(int i=0;i<k;i++)
        {
            if(ksize==NULL)
                return  head;
            ksize=ksize->next;
        }
       ListNode* curr=head,*prev=NULL,*Next=NULL;
        int count=0;
        while(count<k)
            //for(int i=0;i<k;i++)
        {
    
             Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
            count++;
        }
            ListNode* newhead=reverseKGroup(Next,k);
            head->next=newhead;
        
        return prev;
        
    }
};