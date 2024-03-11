//Simplest Approach || Using Two Pointers
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
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            ListNode *fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return;

        ListNode* slow = head;
        ListNode* fast = head;
       while (fast->next != NULL && fast->next->next != NULL) 
        {
           slow = slow->next;
           fast = fast->next->next;
        }
       
       ListNode *fwd=head;
       ListNode *rev=reverse(slow->next);  
       slow->next=NULL;
       ListNode *ans=new ListNode(0);
       ListNode *res=ans;

       while(fwd!=NULL && rev!=NULL)
       {
           res->next=fwd;
           fwd=fwd->next;
           res=res->next;

           res->next=rev;
           rev=rev->next;
           res=res->next;
       } 

       if(fwd!=NULL)
           res->next=fwd;
      
       head=ans->next;
    }
};