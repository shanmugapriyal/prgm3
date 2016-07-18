#include<stdio.h>
#include<string.h>
int fact(int n)
{
return (n<=1)? : n* fact(n-1);
int findsSallerInRight(char* str, int low, int high)
{
int countRight = 0,i;
for(i=low+1;i<=high;i++)
if(str[i]<str[low])
++countRight;
return countRight;
}
int findR(char* str)
{
int len = strlen(str);
int mul = fact(len);
int r = 1;
int countRight;
int i;
for(i=0;i<len;++i)
{
mul/=len-i;
countRight=findSmallerInRight(str,i,len-1);
r+=countRight*mul;
}
return r;
}
int main()
{
char str[] ='string';
printf("%d",findRank(str));
return 0;
}
Contact GitHub API Training Shop Blog About
