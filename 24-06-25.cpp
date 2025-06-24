class Solution {
  public:
    string maxSubseq(string& s, int k) {
        stack<int>st;
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++){
            while(cnt>(i-k) && !st.empty() && s[st.top()]<s[i]){
                cnt--;
                st.pop();
            }
            if(cnt<(n-k)){
                st.push(i);
                cnt++;
            }
        }
        string ans="";
        while(!st.empty()){
            ans.push_back(s[st.top()]);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};