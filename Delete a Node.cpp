inglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
if(position==0){
     SinglyLinkedListNode *current =head->next;
     SinglyLinkedListNode *temp=head;
    head=current;
    free(temp);
    return head;
}
else{
SinglyLinkedListNode *current=head;
int j=1;
while(j!=position&&current->next!=NULL){

j++;
current=current->next;

}

SinglyLinkedListNode* temp=current->next;
current->next=current->next->next;
free(temp);
return head;
}

}
