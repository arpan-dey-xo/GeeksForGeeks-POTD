class solution {
  public:
    long long listToNum(Node *node){
        long long num=0,mod=1e9+7;
        while(node){
            num=(num*10+node->data)%mod;
            node=node->next;
        }
        return num;
    }
    long long multiplyTwoLists(Node *first, Node *second) {
        long long num1 = listToNum(first);
        long long num2 = listToNum(second);
        return (num1*num2)%1000000007;
    }
};