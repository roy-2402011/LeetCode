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
    bool isPalindrome(ListNode* head) {
        vector<int>v1;
         vector<int>v2;
        ListNode* tmp = head;
        while(tmp!=NULL)
        {
            v1.push_back(tmp->val);
            v2.push_back(tmp->val);
            tmp=tmp->next;
        }

      reverse(v1.begin(),v1.end());
      for(int i=0; i<v1.size();i++)
      {
         if(v1[i]!=v2[i])
         {
            return false;
         }
      }
      return true;
    }
};