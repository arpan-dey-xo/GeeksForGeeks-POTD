class Solution {
  public:
    int getCount(struct Node* head) {
        int count = 0;
        Node* temp = head;
        while(temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};