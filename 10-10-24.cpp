class Solution{
  public:
    int maxDistance(vector<int> &arr) {
        int size = arr.size();
        unordered_map<int, int> mp;
        int maxi=0;
        for(int i=0; i<size; i++){
            auto it= mp.find(arr[i]);
            if(it!=mp.end()){
                maxi= max(maxi, i-(it->second));
            }
            else{
                mp.insert({arr[i],i});
            }
        }
        return maxi;
    }
};