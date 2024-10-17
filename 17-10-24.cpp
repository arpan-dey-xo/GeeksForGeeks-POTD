class Solution {
  public:
    vector<Node*> alternatingSplitList(struct Node* head) {
        Node *head1=NULL,*head2=NULL,*temp1=NULL,*temp2=NULL;
        int count=0;
        while(head){
            if(count%2) {
                if(!head2) {
                    head2=head;
                    temp2=head;
                }
                else {
                    temp2->next=head;
                    temp2=temp2->next;
                }
            }
            else {
                if(!head1) {
                    head1=head;
                    temp1=head;
                }
                else {
                    temp1->next=head;
                    temp1=temp1->next;
                }
            }
            head=head->next;
            count++;
        }
        temp1->next=NULL;
        temp2->next=NULL;
        return {head1,head2};
    }

};