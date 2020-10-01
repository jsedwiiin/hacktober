#include <stdio.h> 
#include <math.h> 
void main() 
{ 
 int a,b,c; 
 float d,r1,r2,r,rp,ip; 
 printf("Enter the values of a,b,c:"); 
 scanf("%d%d%d",&a,&b,&c); 
 if(a==0) 
 printf("invalid"); 
 else 
 { 
 d=b*b-4*a*c; 
 if(d>0) 
 { 
 printf("Roots are real and distinct\n"); 
 r1=((-b)+sqrt(d))/(2.0*a); 
 r2=((-b)-sqrt(d))/(2.0*a); 
 printf("Roots are %f,%f\n",r1,r2); 
 } 
 else if(d==0) 
 { 
 printf("Roots are real and equal\n"); 
 r=(-b)/(2.0*a); 
 printf("Roots are %f,%f\n",r,r); 
 } 
 else 
 { 
 printf("Roots are imaginary\n"); 
 rp=(-b)/(2.0*a); 
 ip=sqrt(-d)/(2.0*a);
 printf("Roots are %f +i%f and %f-i%f\n",rp,ip,rp,ip);  } 
  
 } 
  
  
}
