#include <stdio.h>
#include "power.c"
#include "basicMath.c"


int main(int argc, char const *argv[]) {
printf("give me number example like real number 3.455\n");
double x;
scanf("%lf",&x);

double y1 = add(Exponent(x),sub(power(x, 3),2));
double y2 = add(mul(x,3),mul(2,(power(x,2))));
double y3 = sub(div(mul(4,(power(x,3))),5),mul(2,x));

printf(" f(x)=e^x+𝑥^3−2 Get: %.4f Result: %.4f\n",x,y1);

printf(" f(x)= 3x + 2X^2 Get: %.4f Result: %.4f\n",x,y2);
printf(" f(x)= (4x^3)/5 -2x Get: %.4f Result: %.4f\n",x,y3);
}
