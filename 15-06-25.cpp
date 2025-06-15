class Solution {
  public:
    bool checkCurrentDivisor(int divisor,vector<int>&arr,int k){
        
        int values = 0;
        int n = arr.size();
        
        for(int i  = 0;i<n;i++){
            values += arr[i]/divisor;
            if(arr[i]%divisor)
                values++;
        }
        
        return values <= k;
    }
    
    int smallestDivisor(vector<int>& arr, int k) {
        int low = 1;
        int high = 1;
        int n  = arr.size();
        int ans = INT_MAX ;
        
        for(int i  = 0;i<n;i++){
            high = max(high,arr[i]);
        }

        while(low<=high){
            int mid = low +(high-low)/2;
            
            if(checkCurrentDivisor(mid,arr,k)){
                ans = min(ans,mid);
                high = mid-1;
            }
            else low  = mid+1;
        }
        return ans;
    }
};
