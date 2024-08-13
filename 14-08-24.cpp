class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        
        int maxLen = 0;
        string str;
        
        for(int i=0;i<str1.size();i++){
            str = "";
            for(int j=i;j<str1.size();j++){
                str += str1[j];
                if(str2.find(str) <= str2.size()){
                    maxLen = max(maxLen,j-i+1);
                }
            }
        }
        return maxLen;
    }
};