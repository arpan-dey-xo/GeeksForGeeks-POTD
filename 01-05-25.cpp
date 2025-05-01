class Solution {
    public:
      vector<int> nthRowOfPascalTriangle(int n) {     
          int MOD=1e9+7;
          vector<int>temp;
          vector<int>v;
          if(n==1){
              v.push_back(1);
              return v;
          }
          temp=nthRowOfPascalTriangle(n-1);
          
          v.push_back(1);
          for(int i=0;i<temp.size()-1;i++){
              v.push_back((temp[i]+temp[i+1])%MOD);
          }
          
           v.push_back(1);
           return v;
      }
  };