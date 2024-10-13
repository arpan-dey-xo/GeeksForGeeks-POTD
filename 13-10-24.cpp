class Solution {
  public:
    void deleteAlt(struct Node *head) {
        while(head) { 
            if(head!=NULL && head->next != NULL)
            head->next = head->next->next;
            head = head->next;
        }
    }
};