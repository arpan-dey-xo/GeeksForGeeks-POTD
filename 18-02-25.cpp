class Solution {
    public:
      vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          sort(points.begin(), points.end(), [&](vector<int>& A, vector<int>& B) {
              return (A[0] * A[0] + A[1] * A[1]) < (B[0] * B[0] + B[1] * B[1]);
          });
          return vector<vector<int>>(points.begin(), points.begin() + k);
      }
  };