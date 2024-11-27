#include<stdio.h>
void main()
{
  int n,faltu=0,i,j,count=0;
  char l=97;
  printf("enter number of stones : ");
  scanf("%d",&n);
struct stone
{
  char gem[26];
};
struct stone g[n];
for(i=0;i<n;i++)
{
  printf("enter minrals of rock[%d]:",i);
  scanf("%s",&g[i].gem[26]);
}
for(j=0;j<n;j++)
{
  for(i=0;i<26;i++)
  {
    if(l+j==g[j].gem[i]);
    {
      faltu++;
      if(faltu==26)
      {
        count++;
      }
    }
  }
  faltu=0; 
}
  printf("%d",count);
}



