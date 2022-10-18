#include<stdio.h>
#include<math.h>
//hello
//welcome
void main()
{
float a,b,c,r1,r2,d,r1_imag;
printf("Enter the coefficients :");
scanf("%g%g%g",&a,&b,&c);
d=(b*b)-(4*a*c);
if (a==0)
printf("Not a quadratic equation .");
else if(d>0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b+sqrt(d))/(2*a);
printf("The roots are real and unequal . \n");
printf("The roots are %g and %g \n",r1,r2);
}
else if(d==0)
{
r1=-b/(2*a);
printf("The roots are real and equal . \n");
printf("The root is %g . \n",r1);
}
else
{
printf("The roots are imaginary. \n");
r1_imag=(4*a*c)-(b*b);
printf("The roots are %g+%gi and %g-%gi . \n",-b/(2*a),sqrt(r1_imag)/(2*a),-
b/(2*a),sqrt(r1_imag));
}
}
