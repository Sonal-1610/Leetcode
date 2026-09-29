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
    ListNode* removeNthFromEnd(ListNode* head, int x) {
        ListNode* temp1=head;
        int counter=0;
        while(temp1!=NULL){
             counter++;
            temp1=temp1->next;
           
        }
       int n=counter-x+1;
        if(n==1){
            if(head!=NULL){
           ListNode* temp=head;
           head=head->next;
           delete temp;
           return head;}
           else{
               return NULL;
           }
        }
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        ListNode* cur=head;
        int count=1;
        while(count!=n-1){
            cur=cur->next;
            count++;
        }
        ListNode* temp=cur->next;
        cur->next=temp->next;
        delete temp;
        return head;
    }
};