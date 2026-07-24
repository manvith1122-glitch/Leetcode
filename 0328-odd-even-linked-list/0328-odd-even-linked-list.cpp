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
    ListNode* oddEvenList(ListNode* head) {
       if(head==nullptr)
            return head;
        int count=1;
        ListNode* temp=head;
        ListNode* oddHead=nullptr;
        ListNode* oddTail=nullptr;
        ListNode* evenHead=nullptr;
        ListNode* evenTail=nullptr;
        while(temp!=nullptr){
            ListNode* nextNode=temp->next;
            temp->next=nullptr;
            if(count%2!=0){
                if(oddHead==nullptr){
                    oddHead=temp;
                    oddTail=temp;
                }
                else{
                    oddTail->next=temp;
                    oddTail=temp;
                }
            }
            else{
                if(evenHead==nullptr){
                    evenHead=temp;
                    evenTail=temp;
                }
                else{
                    evenTail->next=temp;
                    evenTail=temp;
                }

            }
            temp=nextNode;
            count++;
        }
        oddTail->next=evenHead;
        return oddHead;
    }
};