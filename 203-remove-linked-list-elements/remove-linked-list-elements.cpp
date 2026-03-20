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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* extra = new ListNode(0);
        extra->next = head;

        ListNode* prev = extra;
        ListNode* curr = head;

    while(curr != nullptr) {
      if(curr->val==val)
      {  ListNode* tmp = curr;
         prev->next=curr->next;
         curr = prev->next;
         delete tmp;
      }
      else
      {
        prev = curr;
        curr=curr->next;
      }
    }
    ListNode* newHead = extra->next;
       
        return newHead;
    }
};