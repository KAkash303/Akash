#include<stdio.h>
#include<string.h>
int main()
{
  char str[10][20], s1[20];
  int i,n,found=0;
  printf("Enter how many number u want: ");
  scanf("%d",&n);
  printf("enter the string\n");
   for(i=0;i<n;i++)
{
 scanf("%s",str[i]);
} 

  printf("enter the string u want to search: ");
  scanf("%s",s1);
  for(i=0;i<n;i++)
  {
    if(strcmp(s1, str[i])==0)
    {
    found=1;
        printf("strings are found in %d",i+1);
    }
    }
if(found==0)
 printf("Not found"); 
   return 0;
}