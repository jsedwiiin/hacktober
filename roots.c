#include<stdio.h>
#include<math.h>
void main()
{
  printf("Enter the values of a,b,c:");
  int a,b,c,d;
  float s1,s2;
  scanf("%d %d %d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>0)
  {
    s1=(-b+sqrt(d))/(2*a);
    s2=(-b-sqrt(d))/(2*a);
    printf("The equation has two real roots\nRoot 1:%f\nRoot 2:%f\n",s1,s2);
  }
  else if(d==0)
  {
    s1=-b/(2.0*a);
    printf("The equation has two equal roots\nRoot:%f\n",s1);
  }
  else
  {
    s1=-b/(2.0*a);
    s2=sqrt(-d/(2*a));
    printf("The equation has imaginary roots.\nRoot 1:%f+%fi\nRoot 2:%f-%fi\n",s1,s2,s1,s2);
  }
}
