class Solution {
  public:
    void backtrack(string &s, vector<string> &result, int index) {
        if (index == s.size()) {
            result.push_back(s);
            return;
        }

        unordered_set<char> seen;
        for (int i = index; i < s.size(); i++) {
            if (seen.find(s[i]) != seen.end()) {
                continue;
            }
            seen.insert(s[i]);
            swap(s[i], s[index]);
            backtrack(s, result, index + 1);
            swap(s[i], s[index]);
        }
    }

    vector<string> findPermutation(string &s) {
        vector<string> result;
        backtrack(s, result, 0);
        return result;
    }
};