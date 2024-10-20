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
        ListNode *result = new ListNode(0);
        ListNode *dummy = result;
        int carry=0;
        int sum=0;
        while(l1||l2||carry){
            int d1=l1?l1->val:0;
            int d2=l2?l2->val:0;
            sum = d1 + d2 + carry;
            carry = sum / 10;
            sum %= 10;

            dummy->next= new ListNode(sum);
            dummy= dummy->next;

            l1=l1?l1->next:nullptr;
            l2=l2?l2->next:nullptr;
        }
        return result->next;
    }
};