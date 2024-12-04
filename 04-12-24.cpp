class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        if(s1.size() != s2.size()) return false;
        
        string concatenated = s1 + s1;
        
        return concatenated.find(s2) != string::npos;
    }
};