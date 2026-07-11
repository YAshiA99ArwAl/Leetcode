/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        if(headA==nullptr || headB==nullptr)
            return nullptr;
        
        while(tempA != tempB){
            tempA = tempA? tempA->next : headB;
            tempB = tempB? tempB->next : headA;
        }
        return tempA;
        
    }
};