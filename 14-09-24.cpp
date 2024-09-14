class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int> positive,negative;
        for(auto x:arr){
            if(x>=0)positive.push_back(x);
            else negative.push_back(x);
        }
        int i=0,j=0,k=0;
        while(i<positive.size() and j<negative.size()){
            if(k%2)arr[k++]=negative[j++];
            else arr[k++]=positive[i++];
        }
        while(i<positive.size())arr[k++]=positive[i++];
        while(j<negative.size())arr[k++]=negative[j++];
    }
};