class Solution {
  public:
    Node* reverse(Node* head) {
        Node *curr=head->next, *prev=head, *nxt=NULL;
        while(curr!=head){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        head->next=prev;
        return prev;
    }

    Node* deleteNode(Node* head, int key) {
        Node *temp = head->next, *prev=head;
        if(head->data==key){
            while(temp!=head){
                prev=temp;
                temp=temp->next;
            }
        }
        else{
            while(temp!=head and temp->data!=key){
                prev=temp;
                temp=temp->next;
            }
        }
        if(head->data==key or temp!=head)
        prev->next=temp->next;
        return head->data==key?prev->next:head;
    }
};