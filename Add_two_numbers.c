struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head3=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* ptr1=l1;
    struct ListNode* ptr2=l2;
    int s,r=0;
    s=ptr1->val+ptr2->val+r;
    if(s>9){
            r=s/10;
            s=s%10;
        }
        head3->val=s;
        head3->next=NULL;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    struct ListNode* ptr3=head3;
    while(ptr1!=NULL  && ptr2!=NULL){
        s=ptr1->val+ptr2->val+r;
        if(s>9){
            r=s/10;
            s=s%10;
        }
        else
        r=0;
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=s;
        ptr3->next=temp;
        temp->next=NULL;
        ptr3=temp;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    while(ptr1!=NULL){
        s=ptr1->val+r;
        if(s>9){
            r=s/10;
            s=s%10;
        }
        else
        r=0;
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=s;
        ptr3->next=temp;
        temp->next=NULL;
        ptr3=temp;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL){
        s=ptr2->val+r;
        if(s>9){
            r=s/10;
            s=s%10;
        }
        else
        r=0;
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=s;
        ptr3->next=temp;
        temp->next=NULL;
        ptr3=temp;
        ptr2=ptr2->next;
    }
    s=r;
    if(s>0){
         struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->val=s;
        ptr3->next=temp;
        temp->next=NULL;
        ptr3=temp;
    }
   
        return head3;
}
