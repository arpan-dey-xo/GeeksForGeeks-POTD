class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        int n = s1.length();
        if (n != s2.length()) {
            return false;
        }
        int chars[26] = {0};
        
        for (int i = 0; i < n ; i++) {
            chars[s1[i] - 'a']++;
        }
        for (int i = 0; i < n; i++) {
            int idx = s2[i] - 'a';
            if (chars[idx] == 0) return false;
            chars[idx]--;    
        }
        return true;
    }
};