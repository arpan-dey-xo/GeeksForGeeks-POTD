class Solution {
  public:
    int getLen(Node* head) {
        int len = 0 ;
        while(head) {
            len++;
            head = head->next;
        }
        return len;
    }
    int getIntersectionPoint(int diff, Node* head1, Node* head2){
        for (int i = 0 ; i < diff; i++) {
            head1 = head1->next;
        }
        while (head1 && head2){
            if (head1 == head2) return head1->data;
            head1 = head1->next;
            head2 = head2->next;
        }
        return -1;
    }
    int intersectPoint(Node* head1, Node* head2) {
        int n1 = getLen(head1) ;
        int n2 = getLen(head2);
        int diff = 0;
        if(n1 > n2) {
            diff = n1 - n2;
            return getIntersectionPoint(diff, head1, head2);
        }
        diff = n2 - n1;
        return getIntersectionPoint(diff, head2, head1);
    }
};