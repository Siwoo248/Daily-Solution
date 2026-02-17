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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* current = head;       // current for current position
        int cnt = 0;                        // for counting the lenth of node

        while(current != nullptr){
            cnt++;
            current = current->next;    // changing the current location
        }

        if(cnt == 1){return nullptr;}

        cnt /= 2;
        current = head;                 // moving current position to head

        for(int i=0; i < cnt - 1; i++){
            current = current->next;    // keeping nodes that are before the middle node
        }

        current->next = current->next->next;    // skipping the middle node and keep the rest same

        return head;
    }
};