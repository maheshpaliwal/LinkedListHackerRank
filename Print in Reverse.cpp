void reversePrint(SinglyLinkedListNode* head) {
if(head->next==NULL){
    cout<<head->data<<endl;
    return;
}
reversePrint(head->next);
cout<<head->data<<endl;

}
