class Solution {
  public:
    bool detectLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;
        
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) return true;
        }
        return false;
    }
};