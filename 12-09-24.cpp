class Solution {
  public:
    int getMiddle(Node* head) {
        if (head == NULL) return -1;
        Node *fast = head;
        Node *slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow->data;
    } 
};