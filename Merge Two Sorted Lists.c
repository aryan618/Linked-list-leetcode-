struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* list3=(struct ListNode*)malloc(sizeof(struct ListNode));
    if(list1 == NULL && list2==NULL)
            return list1;
    if(list1 == NULL)
        return list2;
    if(list2 == NULL)
            return list1;
    struct ListNode* ptr1=list1;
    struct ListNode* ptr2=list2;
    if(ptr1->val<=ptr2->val){
        list3->val=ptr1->val;
        list3->next=NULL;
        ptr1=ptr1->next;
    }
    else{
        list3->val=ptr2->val;
        list3->next=NULL;
        ptr2=ptr2->next;
    }
    struct ListNode* ptr3=list3;
    
    
    
    while(ptr1!=NULL &&ptr2!=NULL){
        struct ListNode* ptr4=(struct ListNode*)malloc(sizeof(struct ListNode));
        if(ptr1->val<=ptr2->val){
            ptr4->val=ptr1->val;
            ptr4->next=NULL;
            ptr3->next=ptr4;
            ptr3=ptr3->next;
            ptr1=ptr1->next;
        }
        else{
            ptr4->val=ptr2->val;
            ptr4->next=NULL;
            ptr3->next=ptr4;
            ptr3=ptr3->next;
            ptr2=ptr2->next;
        }
    }
    while(ptr1!=NULL){
        struct ListNode* ptr4=(struct ListNode*)malloc(sizeof(struct ListNode));
        ptr4->val=ptr1->val;
        ptr4->next=NULL;
        ptr3->next=ptr4;
        ptr3=ptr3->next;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL){
        struct ListNode* ptr4=(struct ListNode*)malloc(sizeof(struct ListNode));
        ptr4->val=ptr2->val;
        ptr4->next=NULL;
        ptr3->next=ptr4;
        ptr3=ptr3->next;
        ptr2=ptr2->next;
    }
    return list3;
}
