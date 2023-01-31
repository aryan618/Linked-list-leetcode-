struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head==NULL || head->next==NULL)
    return head;
    int c=1;
    struct ListNode* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        c++;
    }
    if(k>=c){
        k=k%c;
    }
    int n=0;
    while(k!=n){
        /*if(n>=c && n%c==0){
            n++;
            continue;
        }*/
        
        struct ListNode* ptr1=head;
        struct ListNode* ptr2=head->next;
        while(ptr2->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr2->next=head;
        head=ptr2;
        ptr1->next=NULL;
        n++;
    }
    return head;
}
