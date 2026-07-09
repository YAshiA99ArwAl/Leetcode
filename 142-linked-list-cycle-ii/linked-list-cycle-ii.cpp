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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast == nullptr || fast->next == nullptr)
            return nullptr;
        
        ListNode* pt1 = slow;
        ListNode* pt2 = head;
        while(pt1 != pt2){
            pt1 = pt1->next;
            pt2 = pt2->next;
        }
        return pt1;
        
    }
};