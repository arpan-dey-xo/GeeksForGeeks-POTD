class Solution {
    public:
      struct TrieNode {
          TrieNode* child[2] = {nullptr, nullptr};
      };
  
      void insert(TrieNode* root, int num) {
          TrieNode* node = root;
          for (int i = 20; i >= 0; --i) {
              int bit = (num >> i) & 1;
              if (!node->child[bit]) {
                  node->child[bit] = new TrieNode();
              }
              node = node->child[bit];
          }
      }
  
      int findMaxXor(TrieNode* root, int num) {
          TrieNode* node = root;
          int maxXor = 0;
          for (int i = 20; i >= 0; --i) {
              int bit = (num >> i) & 1;
              int opp = 1 - bit;
              if (node->child[opp]) {
                  maxXor |= (1 << i);
                  node = node->child[opp];
              }
              else {
                  node = node->child[bit];
              }
          }
          return maxXor;
      }
  
      int maxXor(vector<int> &arr) {
          TrieNode* root = new TrieNode();
          int maxResult = 0;
  
          insert(root, arr[0]);
  
          for (int i = 1; i < arr.size(); ++i) {
              maxResult = max(maxResult, findMaxXor(root, arr[i]));
              insert(root, arr[i]);
          }
  
          return maxResult;
      }
  };