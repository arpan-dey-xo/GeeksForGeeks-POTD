class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char,int> mp;
        int maxAns=-1;
        int j=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(mp.size()==k){
                int len=i-j+1;
                maxAns=max(maxAns,len);
            }
            if(mp.size()>k){
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(s[j]);
                j++;
                
            }
        }
        return maxAns;
    }
};