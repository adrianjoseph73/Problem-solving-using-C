#include <stdio.h>
int binsrc(int x[], int low, int high, int key)
{
int mid;
while(low<=high)
{
mid=(low+high)/2;
if (x[mid]==key)
return mid;
else if (x[mid]<key)
low-mid+1;
else
high-mid-1;
}
return-1;
}
int main()
{
int a[20], key,i,n,succ;
printf ("enter the n values upto max of 20");
scanf("%d",&n);
if (n>0) {
printf ("enter the number of elements in ascending order\n"); for(i=0;i<n;i++)
scanf(d,&a[i]);
printf ("enter the key element to be searched\n"); scanf("%d",&key);
succ-binsrc(a,0,n-1,key);
if (succ>=0)
printf("element found in position =%d\n",succ+1);
else
printf("element not found");
}
else
printf("no. of elements should be greater than 0");
return 0;
