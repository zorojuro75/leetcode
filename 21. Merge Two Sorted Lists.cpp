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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr)return list2;
        else if(list2==nullptr)return list1;
        ListNode *list3 = nullptr;
        ListNode *list = list3;
        while(list1!=nullptr || list2!=nullptr){
            if(list1==nullptr){
                if(list3==nullptr){
                    list3 = new ListNode(list2->val);
                    list2=list2->next;
                    list = list3;
                }
                else{
                    list3->next = new ListNode(list2->val);
                    list3= list3->next;
                    list2=list2->next;
                }
                
            }
            else if(list2==nullptr){
                if(list3==nullptr){
                    list3 = new ListNode(list1->val);
                    list1=list1->next;
                    list = list3;
                }
                else{
                    list3->next = new ListNode(list1->val);
                    list3= list3->next;
                    list1=list1->next;
                }
            }
            else if(list1->val>list2->val){
                if(list3==nullptr){
                    list3 = new ListNode(list2->val);
                    list2=list2->next;
                    list = list3;
                }
                else{
                    list3->next = new ListNode(list2->val);
                    list3= list3->next;
                    list2=list2->next;
                }
            }
            else{
                if(list3==nullptr){
                    list3 = new ListNode(list1->val);
                    list1=list1->next;
                    list = list3;
                }
                else{
                    list3->next = new ListNode(list1->val);
                    list3= list3->next;
                    list1=list1->next;
                }
            }
        }
        return list;
    }
};
