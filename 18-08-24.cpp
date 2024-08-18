class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int sum=0;
        for (int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum%2==1)
        return false;
        int ans=sum/2;
        int count=0;
        int i=0;
        while(count<=ans)
        {
            if(count==ans)
            return true;
            else
            count+=arr[i];
            i++;
        }
        return false;
    }
};