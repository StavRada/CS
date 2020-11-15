#include "myMath.h"


double power(double x,double y){
    double ans = 1.0;
    for (int i = 0; i < y; i++)
    {
      ans = ans*x;
    }
    return ans;
}
double Exponent (int x){
    double ans =1.0;
    double e = 2.7182;
    for (int i = 0; i < x; i++)
    {
       ans = ans*e;
    }
    return ans;
}
