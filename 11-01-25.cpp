class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int n=s.size();
        int maxlen=0, left=0, right=0;
        int hash[256];
        
        for(int i=0;i<256;i++){
            hash[i]=-1;
        }
        
        while(right<n){
            if(hash[s[right]]!=-1){
                if(hash[s[right]]>=left){
                    left=hash[s[right]]+1;
                }
            }
            
            int len=right-left+1;
            maxlen=max(len,maxlen);
            hash[s[right]]=right;
            right++;
        }
        
        return maxlen;
    }
};