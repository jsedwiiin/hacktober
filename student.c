#include<stdio.h>
void main()
{
  FILE *ptr;
  int flag=0;
  ptr=fopen("/home/aj/Desktop/lab/STUDENT.DAT","r");
  if(ptr==NULL)
    printf("jhhjj");
  typedef struct
  {
    long regno;
    char name[26];
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    int m6;
  }student;
  student s;
  long r;
  printf("Enter register no.:");
  scanf("%ld",&r);
  while(!feof(ptr))
  {
    fscanf(ptr,"%6ld%25c%3d%3d%3d%3d%3d%3d\n",&s.regno,s.name, &s.m1,&s.m2,&s.m3,&s.m4,&s.m5,&s.m6);
    s.name[25]='\0';
    if(s.regno==r)
    {
      flag=1;
      break;
    }
  }
  fclose(ptr);
  float per;
  int total=s.m1+s.m2+s.m3+s.m4+s.m5+s.m6;
  if(flag==1)
  {
    printf("Register no:%ld\nName:%s\nTotal:%d\nGrade:",s.regno,s.name,total);
    per=total/6.0;
    if(per>=45)
      if(per>=60)
        if(per>=75)
          printf("Distinction\n");
        else
          printf("First class\n");
      else
        printf("Passed\n");
    else
      printf("Failed\n");
  }
  else
    printf("Not found\n");
}
