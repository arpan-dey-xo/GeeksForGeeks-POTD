class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int i = 0;
        unordered_map<int, int> hash;
        
        int sum = 0;
        while(i < n){
            sum += arr[i];
            if(sum == target){
                return {0+1,i+1};
            }
            if(hash.find(sum-target) != hash.end()){
                return {hash[sum-target] + 2 , i+1};
            }
            hash[sum] = i;
            i++;
             
        }
        
        return{-1};
    }
};