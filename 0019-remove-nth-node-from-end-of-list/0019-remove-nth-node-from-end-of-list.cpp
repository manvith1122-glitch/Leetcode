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
        if(head==nullptr || head->next==nullptr){
            return head->next;
        }
        
        ListNode* m=head;
        int c=0;
        while(m!=nullptr){
            c++;
            m=m->next;
        }
        int pos=c-n+1;
        if(pos==1){
            ListNode* p=head;
            head=head->next;
            delete p;
            return head;
        }
        ListNode* temp=head;
        ListNode* prev=nullptr;
        for(int i=1;i<pos;i++) {
              prev=temp;
              temp=temp->next;
        }
           ListNode* curr=temp;
           prev->next=temp->next; 
           delete curr;
        return head;
    }
};