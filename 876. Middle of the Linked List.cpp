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
    ListNode* middleNode(ListNode* head) {
        ListNode* list = head;
        int i = 0;
        while(list!=nullptr){
            i++;
            list=list->next;
        }
        i=i/2;
        while(i--){
            head=head->next;
        }
        return  head;
    }
};
