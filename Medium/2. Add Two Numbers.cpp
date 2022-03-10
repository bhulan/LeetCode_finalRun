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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
   int carry=0;
int last_digit=0;
ListNode *head= new ListNode();
ListNode *curr=head;
ListNode *prev;

    while(l1!=NULL && l2!=NULL){
        int data=l1->val+l2->val+carry;
        last_digit=data%10;
        carry=data/10;
        l1=l1->next;
        l2=l2->next;
        curr->val=last_digit;
        curr->next=new ListNode();
        prev=curr;
        curr=curr->next;
    }
    while(l1!=NULL){
        int data=l1->val+carry;
        last_digit=data%10;
        carry=data/10;
        l1=l1->next;
        curr->val=last_digit;
        curr->next=new ListNode();
        prev=curr;
        curr=curr->next;
    }
    while(l2!=NULL){
        int data=l2->val+carry;
        last_digit=data%10;
        carry=data/10;
        l2=l2->next;
        curr->val=last_digit;
        curr->next=new ListNode();
        prev=curr;
        curr=curr->next;
    }
    if(carry!=0){
        curr->val=carry;
        return head;
    }
    prev->next=NULL;
    return head;

    }
};
