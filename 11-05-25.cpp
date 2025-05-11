class Solution {
  public:
    int kthLargest(vector<int> &arr, int k) {
        priority_queue<int,vector<int>,greater<>>p;
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=i;j<n;j++){
                x+=arr[j];
                if(p.size()<k) p.push(x);
                else if(p.top()<x) p.pop(),p.push(x);
                
            }
        }
        return p.top();
    }
};