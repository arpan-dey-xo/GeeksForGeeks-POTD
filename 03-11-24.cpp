class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        Node* temp = *head;
        int count = 0;
        while (temp) {
            count++;
            temp = temp->next;
        }
        if (count%2 == 0) return true;
        return false;
    }
};