class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        int n= arr.size();
        vector<int> pre(n), post(n);
        pre[0]=arr[0], post[n-1]=arr[n-1];
    
        for(int i=1; i<n; i++){
            pre[i]=min(pre[i-1], arr[i]);
        }
        
        for(int i=n-2; i>=0; i--){
            post[i] = max(post[i+1], arr[i]);
        }
        
        for(int i=0; i<n; i++){
            if(pre[i]<arr[i] && arr[i]<post[i]){
                return {pre[i],arr[i],post[i]};
            }
        }
        return {};
    }
};