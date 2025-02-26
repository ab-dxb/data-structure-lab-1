/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL) {
        return NULL;
    }
    
    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode* prev = &dummy;
    
    while (prev->next != NULL) {
        struct ListNode* current = prev->next;
        
        if (current->val == val) {
            prev->next = current->next;
            free(current);
        } else {
            prev = prev->next;
        }
    }
    
    return dummy.next;
}
