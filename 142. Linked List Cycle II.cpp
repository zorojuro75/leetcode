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
        vector<ListNode*> list;
        while(head!=nullptr){
            for(ListNode* i:list){
                if(i==head)return head;  
            }
            list.push_back(head);
            head=head->next;            
        }
        return head;
    }
};
