class Solution {
  public:
    Node* reverse(Node* head) {
        if(head==nullptr || head->next==nullptr)
        return head;
       
        Node* node=reverse(head->next);
        head->next->next=head;
        head->next=nullptr;
        return node;
    }
    Node* reverseList(struct Node* head) {
        if(head==nullptr)
        return head;
        return reverse(head);
    }
};