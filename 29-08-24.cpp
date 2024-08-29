class Solution {
  public:
    int countNodesinLoop(Node *head) {
        struct Node *slow = head;
        struct Node *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                struct Node *curr = slow->next;
                int loopLen = 1;
                while (curr != slow) {
                    curr = curr->next;
                    loopLen++;
                }
                return loopLen;
            }
        }
        return 0;
    }
};