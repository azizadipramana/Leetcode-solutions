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
        ListNode* temp = new ListNode(); 
        ListNode* move = temp; 

        while(list1 || list2){
            if(list1 && list2){
                if(list1->val <= list2->val){
                    move->next = new ListNode(list1->val); 
                    list1 = list1->next; 
                } else {
                    move->next = new ListNode(list2->val); 
                    list2 = list2->next; 
                }   
            } else {
                if(list1){
                    move->next = new ListNode(list1->val); 
                    list1 = list1->next; 
                } 
                if(list2){
                    move->next = new ListNode(list2->val); 
                    list2 = list2->next; 
                }
            }
            move = move->next; 
        }
        
        return temp->next; 
    }
};
