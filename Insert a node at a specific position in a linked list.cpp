SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* node=new SinglyLinkedListNode(data);
if(position==0){
node->next==head;
return node;


}
else{
    int j=1;
    SinglyLinkedListNode *current=head;
    while(j!=position&&current->next!=NULL){

        j++;
        current=current->next;
    }
    if(current->next==NULL){
     
current->next=node;
    }
    else{
        node->next=current->next;
        current->next=node;
    }
    return head;
}
