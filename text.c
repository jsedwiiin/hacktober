#include<stdio.h>
#include<stdlib.h>
void main()
{
  char c,loc[100];
  printf("Enter the file location:");
  gets(loc);
  int lower[26]={0},upper[26]={0},digit[10]={0};
  FILE *ptr=fopen(loc,"r");
  if(ptr==NULL)
    printf("No file found.\na");
  printf("1");
  do
  {
    c=getc(ptr);
    if(c>='a'&&c<='z')
      lower[c-'a']++;
    else if(c>='A'&&c<='Z')
      upper[c-'A']++;
    else if(c>='0'&&c<='9')
      digit[c-'0']++;
  }
  while(!feof(ptr));
  fclose(ptr);
  for(int i=0;i<26;i++)
  {
    if(upper[i]>0)
      printf("%c:%d\n",i+'A',upper[i]);
  }
  for(int i=0;i<26;i++)
  {
    if(lower[i]>0)
      printf("%c:%d\n",i+'a',lower[i]);
  }
  for(int i=0;i<10;i++)
  {
    if(digit[i]>0)
      printf("%c:%d\n",i+'0',digit[i]);
  }
}
