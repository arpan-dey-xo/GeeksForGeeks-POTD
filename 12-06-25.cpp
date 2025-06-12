class Solution {
  public:
    static bool customCompare(pair<int, int>a, pair<int, int>b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    
    }
    
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        vector<pair<int, int>> diff;
        
        for(int a : arr){
            if(a == x) continue;
            diff.push_back({abs(a-x), a});
        }
        
        sort(diff.begin(), diff.end(), customCompare);
        
        vector<int> result;
        for(int i=0; i<k; i++){
            result.push_back(diff[i].second);
        }
        return result;
    }
};