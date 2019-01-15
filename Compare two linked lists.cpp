bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
int n=0,m=0;
SinglyLinkedListNode* current1=head1;
SinglyLinkedListNode* current2=head2;


while(current1->next!=NULL){

    n++;
    current1=current1->next;
}
while(current2->next!=NULL){

    m++;
    current2=current2->next;
}
if(n!=m){
    return 0;
}
else{
SinglyLinkedListNode* current1=head1;
SinglyLinkedListNode* current2=head2;

while(current1->next!=NULL){

if(current1->data!=current2->data){
    return 0;
}
current1=current1->next;
current2=current2->next;

}
return 1;

}
}
