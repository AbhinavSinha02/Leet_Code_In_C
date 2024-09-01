/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* current = head;
    if (current == NULL) {
        return 0;
    }
    
    
    int count = 1;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    if(count-n == 1){
        return head->next;
    }
    current = head;
    struct ListNode* prev;
    for (int i = 1; current!=NULL && i < count - n; i++) {
        prev=current;
        current=current->next;
    }
    if(current!=NULL){
        prev->next=current->next;
        free(current);
    }
    return head;
    

    
}


