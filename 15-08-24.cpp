class Solution {
  public:
    Node* reverse(Node* head){
        Node * pre = NULL, *curr = head, *next = head->next;
        while(next){
            curr->next = pre;
            pre = curr;
            curr = next;
            next = next->next;
        }
        curr->next = pre;
        return curr;
    }
    Node* addOne(Node* head) {
        Node *re =  reverse(head);
        Node *temp = re, *pre = temp;
        while(temp && temp->data == 9){
            temp->data = 0;
            pre = temp;
            temp = temp->next;
        }
        if(!temp)
            pre->next = new Node(1);
        else
            temp->data += 1;
        return reverse(re);
    }
};