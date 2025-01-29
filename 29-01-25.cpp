class Solution {
  public:
    double power(double b, int e) {
        if (b==0) return 0;
        if (e==0) return 1;

        if (e<0) return 1/power(b, -e);
          
        double temp=power(b, e/2);
           
        if (e%2==0) return temp*temp;
        
        else return b*temp*temp;         
        return pow(b,e);
    }
};