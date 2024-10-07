struct Node *insert(struct Node *head, int data) {
    Node *temp = new Node(data);
    temp->npx = head;
    if(head)head->npx = XOR(temp,head->npx);
    return temp;
}

vector<int> getList(struct Node *head) {
    vector<int> ans;
    Node *curr=head,*prev=NULL,*nxt=NULL;
    while(curr){
        ans.push_back(curr->data);
        nxt = XOR(prev,curr->npx);
        prev=curr;
        curr=nxt;
    }
    return ans;
}