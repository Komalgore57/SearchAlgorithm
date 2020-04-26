#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],n,i,sol=-1,find,lb,ub,mid;
printf("Enter no of elements");
scanf("%d",&n);
printf("Enter elements in sorted manner:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the elements you want to find");
scanf("%d",&find);
lb=0;
ub=n-1;
while(lb<=ub)
{
    mid=(lb+ub)/2;
    if(arr[i]==find)
    {
        sol=mid+1;
        break;
    }
    else if(arr[mid]<find)
    {
        up=mid-1;
    }
    else
    {
        lb=mid+1;
    }
}
if(sol==-1)
{
printf("Not Found!!");
}
else
{
print("Found at %d position",sol);
}
getch();
}
