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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
      ListNode* curr=res;
      while(true){
      if(!l1){
        curr->next=l2;
        break;
        
      }
        if(!l2){
          curr->next=l1;
          break;
        }
        if(l1->val>l2->val){
          curr->next=l2;
          l2=l2->next;
        }
        else{
          curr->next=l1;
          l1=l1->next;
        }
        curr=curr->next;
      }
      return res->next;
    }
};



/**************Output*****************
Input: 
l1=[1,2,4]
l2=[1,3,4]

Output:
[1,1,2,3,4,4]*/
