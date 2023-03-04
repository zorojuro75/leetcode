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
    ListNode* addFront(ListNode* list, int val){
        list = new ListNode(val, list);
        return list;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *list = nullptr;
        while(head!=nullptr){
            list=addFront(list, head->val);
            head = head->next;
        }
        return list;
    }
};
