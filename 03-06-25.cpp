class Solution {
  public:
    int atmost_k_chars(string &s, int k) {
        if (s.size() == 0) {
            return 0;
        }
        vector<int>m(26,0);
        int ans = 0, left = 0;
        int distinct_chars=0;
        for (int i = 0; i < s.size(); i++) {
             m[s[i]-'a']++;
             
             if(m[s[i]-'a']==1) distinct_chars++;
            while (distinct_chars > k) {
                m[s[left]-'a']--;
                if (m[s[left]-'a'] == 0) {
                    distinct_chars--;
                }
                left++;
            }
            ans += (i - left + 1);
        }
        return ans;
    }

    int countSubstr(string& s, int k) {
        return atmost_k_chars(s,k)-atmost_k_chars(s,k-1);
    }
};