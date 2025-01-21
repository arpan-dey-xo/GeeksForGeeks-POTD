class Solution {
  public:
    Node* reverse(Node* head){
        if(head->next==NULL)return head;
        Node* pre=NULL;
        Node* nxt=NULL;
        Node* curr=head;
        while(curr){
            nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;
        }
        return pre;
    }
    Node *reverseKGroup(Node *head, int k) {
        
        bool t=0;
        Node* new_head=NULL;
        Node* tail;
        Node* curr=head;
        while(curr!=NULL){
            int i=1;
           Node* pre=curr;
            while(curr->next!=NULL && i!=k){
                curr=curr->next;
                i++;
            }
           Node* temp=curr->next;
            curr->next=NULL;
            new_head=reverse(pre);
            
            if(t==0){
                head=new_head;
                t=1;
            }
            else{
                tail->next=new_head;
            }
            curr=temp;
            tail=pre;
        }
        return head;
    }
};