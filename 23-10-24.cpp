class Solution {
  public:
    int sumOfLastN_Nodes(struct Node* head, int n) {
        Node* ptr = head;
        int sum = 0, cnt = 0, s = 0;
        while(ptr) {
            sum += ptr->data;
            ptr = ptr->next;
            cnt++;
        }
        
        ptr = head;
        cnt = cnt - n;
        
        while(cnt) {
            s += ptr->data;
            ptr = ptr->next;
            cnt--;
        }
        
        return sum - s;
    }
};