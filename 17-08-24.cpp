class Solution {
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        long long int product=1;
        bool found_zero=false;
        int cnt_zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                product=product*nums[i];
            }
            else{
                 cnt_zero++;
            }
        }
        vector<long long int>ans;
        if(cnt_zero==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans.push_back(product);
                }
                else ans.push_back(0);
            }
        }
        else if(cnt_zero>1){
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        else{
            for(int i=0;i<nums.size();i++){
                ans.push_back(product/nums[i]);
            }
        }
        return ans;
    }
};