#include<stdio.h>
void main()
{
  int a[25],b[25],c[50],ano,bno,i,j;
  printf("Enter the number of elements in the first array:");
  scanf("%d",&ano);
  for(i=0;i<ano;i++)
    scanf("%d",&a[i]);
  printf("Enter the no. of elements in the second array:");
  scanf("%d",&bno);
  for(i=0;i<bno;i++)
    scanf("%d",&b[i]);
  for(i=0,j=0;i<ano&&j<bno;)
  {
    if(a[i]<b[j])
    {
      c[i+j]=a[i];
      i=i+1;
    }
    else
    {
      c[i+j]=b[j];
      j=j+1;
    }
  }
  for(;i<ano;i++)
    c[i+j]=a[i];
  for(;j<bno;j++)
    c[i+j]=b[j];
  printf("The newly merged array is:\n");
  for(int q=0;q<i+j;q++)
    printf("%d\t",c[q]);
}
