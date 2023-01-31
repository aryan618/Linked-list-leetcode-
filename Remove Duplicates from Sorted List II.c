struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL)
    return NULL;
    struct ListNode* dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=head;
    struct ListNode* prev=dummy;
    struct ListNode* ahead=head;
    while(ahead!=NULL){
        if(ahead->next!=NULL && ahead->next->val==ahead->val){
            //int val=ahead->val;
            while(ahead->next!=NULL && ahead->val==ahead->next->val){
                ahead=ahead->next;
            }
            prev->next=ahead->next;
        }
        else{
            //ahead=ahead->next;
            prev=prev->next;
        }
        ahead=ahead->next;
    }
    return dummy->next;
}
