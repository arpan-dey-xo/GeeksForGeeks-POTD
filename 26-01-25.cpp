class Solution {
  public:
    Node* findFirstNode(Node* head) {
        Node*temp=head;
       
        map<Node*,bool>visited;
       
        Node*dummyNode=new Node(-1);
        Node*curr=dummyNode;
        
        while(temp!=NULL){
            
            if(visited[temp]==true){
                curr->next=new Node(temp->data);
                curr=curr->next;
               
                break;
            }
           
            visited[temp]=true;
            temp=temp->next;
        }
        return dummyNode->next;
    }
};