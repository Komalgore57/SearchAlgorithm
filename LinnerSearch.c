#include<stdio.h>
#include<contio.h>
void main()
{
int arr[100],n,i,sol=-1,find;
printf("Enter no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the elements you want to find");
scanf("%d",&find);
for(i=0;i<n;i++)
{
if(arr[i]]==find)
{
sl=i+1;
break
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
