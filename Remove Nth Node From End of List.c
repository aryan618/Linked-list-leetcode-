struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head==NULL)
    return NULL;
    int c=0;
    struct ListNode* ptr=head;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    int k=c-n+1;
    struct ListNode* ptr1=head;
    struct ListNode* ptr2=head->next;
    int m=1;
    if(m==k){
        head=head->next;
        return head;
    }
    while(ptr2!=NULL){
        m++;
        if(m==k && m==c){
            free(ptr2);
            ptr1->next=NULL;
            return head;
        }
        else if(m==k){
            struct ListNode* temp=ptr2;
            ptr2=ptr2->next;
            ptr1->next=ptr2;
            free(temp);
            return head;
        }
        else{
            ptr2=ptr2->next;
            ptr1=ptr1->next;
        }
    }
    return head;
}
