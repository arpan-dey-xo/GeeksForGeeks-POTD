class Solution {
    public:
      int majorityElement(vector<int>& arr) {
          unordered_map<int, int> mp;
          int ans = -1;
          int size = arr.size();
          for (int i = 0; i < size; i++) {
              mp[arr[i]]++;
              if (mp[arr[i]] > size/2) ans = arr[i];
          }
          return ans;
      }
  };