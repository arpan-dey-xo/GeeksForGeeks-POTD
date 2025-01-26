class Solution {
  public:
    void removeLoop(Node* head) {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(fast==NULL|| fast->next==NULL) return;
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        Node* delNode=slow; 
        while(fast->next!=delNode){
            fast=fast->next;
        }
        
        fast->next=NULL;
    }
};