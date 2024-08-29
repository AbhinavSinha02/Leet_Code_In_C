/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* add_numbers= (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* curr= add_numbers;
    int carry=0; int sum;
    while(l1 !=NULL || l2 != NULL || carry){
        sum=carry;
        if(l1 !=NULL){
            sum+= l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->val;
            l2=l2->next;
        }
        carry =sum/10;
        curr->next= (struct ListNode*)malloc(sizeof(struct ListNode));
        curr= curr->next;
        curr->val = sum%10;
        curr->next=NULL;

    }
    struct ListNode* result = add_numbers->next;
    return result;
}
