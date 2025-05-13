class Solution {
  public:
    int nCr(int n, int r) {
        if(r>n)
        return 0;
        __int128 mult1=1;
        __int128 mult2=1;
        int maxi=max(r,n-r);
        int mini=min(r,n-r);
        for(int i=maxi+1;i<=n;i++)
        mult1*=(__int128)i;
        for(int i=2;i<=mini;i++)
        mult2*=(__int128)i;
        return mult1/mult2;
    }
};