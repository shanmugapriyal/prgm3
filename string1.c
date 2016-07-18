#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str1[60],str2[60],i,cost=0,cost1=0,count=0,m;
int hash1[30]={0};
int hash2[30]={0};
scanf("%s",str1);
scanf("%s",str2);
11=strlen(str1);
12=strlen(str2);
for(i=0;str1[i];++i)
{
hash1[str1[i]-97]++;
}
for(i=0;str2[i];++i)
{
hash2[str2[i]-97]++;
}
for(i=0;i<26;i++)
{
count=count+abs(hash1[i]-hash2[i]);
}
if(11!=12)
{
if(count==abs(11-12))
{
cost=+count*3;
}
}
else
{
cost_((count/2)*3)+((count/2)*4);
cost1+=(count/2*5);
}
m=(cost<cost1)?cost:cost1;
printf("%d",min);
return 0;
}
