#include<stdio.h>
void main()
{
int a[5]={8,3,9,2,3),i;
int key=3, flag = 0,n=5;
int location,count=0;
clrscr();
printf("\n print given arrag\n");
for (i=0;i<n;i++)
printf("st alzdJ=zd",i,a[i]);
printf("Nn the key value = %d", key);
for (i=0;i<n;i++)
{
if (key = a[i])
{
flag = 1;
location=i;
count=count+1;
printf("\n successful search element found at alxdl \n", location);
}
}
if (flag==1)
printf("\n successful search element found at alzd] \n", location);
else
printf("\n unsuccessful search element no found \n");
printf("\nmnumber of times=xd",count);
getch();
}