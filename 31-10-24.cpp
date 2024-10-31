class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node* current = head;       

        Node* new_node = getNode(x);
        Node* previous = nullptr;
        while (current && current->data <= x) {
            previous = current;
            current = current->next;
        }
        if (current == head) {
            new_node->next = current;
            head = new_node;
        }
        else if (!current) {
            previous->next = new_node;
            new_node->prev = previous;
        }
        else {
            Node* next_node = previous->next;
            previous->next = new_node;
            new_node->next = next_node;
            new_node->prev = previous;
        }
        return head;
    }
};