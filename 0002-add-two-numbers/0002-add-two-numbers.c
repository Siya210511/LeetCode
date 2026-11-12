/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode a;//A new listnode for storing sum
    struct ListNode *current=&a;//current to iterate
    //a->next=NULL;
    int sum;
    int carry;
    int v1,v2;
    sum=carry=0;
    //The loop only terminates when both the  lists are empty and carry becomes 0.
    while(l1!=NULL||l2!=NULL||carry!=0)
    {
        v1=(l1!=NULL)?l1->val:0;
        v2=(l2!=NULL)?l2->val:0;
        sum=v1+v2+carry;
        carry=sum/10;
        struct ListNode* newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=sum%10;
        newnode->next=NULL;
        current->next=newnode;
        current=newnode;
        if(l1!=NULL)
            l1=l1->next;
        if(l2!=NULL)
            l2=l2->next;
    }
    return a.next;//return type is pointer 
}