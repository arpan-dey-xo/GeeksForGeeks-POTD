class Solution {
  public:
    int count(struct Node* head, int key) {
        int count = 0;
        while (head) {
            if (head->data == key) {
                count++;
            }
            head = head->next;
        }
        return count;
    }
};