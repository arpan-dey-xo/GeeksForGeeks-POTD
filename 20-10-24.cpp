struct compare{
    bool operator()(DLLNode* p1, DLLNode* p2){
        return p1->data > p2->data;
    }
};

class Solution
{
public:
    DLLNode *sortAKSortedDLL(DLLNode *head, int k)
    {
        priority_queue<DLLNode*, vector<DLLNode*>, compare>pq;
        
        DLLNode* temp=head;
        DLLNode* dummy=new DLLNode(-1);
        DLLNode* a=dummy;
        
        for(int i=0;temp!=NULL && i<=k;i++){
            pq.push(temp);
            temp=temp->next;
        }
        
        while(!pq.empty()){
            a->next=pq.top();
            pq.top()->prev=a;
            
            a=a->next;
            a->next=NULL;
            pq.pop();
            
            if(temp){
                pq.push(temp);
                temp=temp->next;
            }
            
        }
        
        head=dummy->next;
        delete(dummy);
        head->prev=NULL;
        return head;
    }
};