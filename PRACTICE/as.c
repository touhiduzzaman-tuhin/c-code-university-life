#include<stdio.h>
void sort_ascending(int a[])
{
int i,j,c;
for(i=0;i<9;i++)
{
for(j=i+1;j<10;j++)
{
if(a[j]<a[i])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
for(i=0; i<10; i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
void sort_descending(int a[])
{
int i,j,c;
for(i=0;i<9;i++)
{
for(j=i+1;j<10;j++)
{
if(a[j]>a[i])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
for(i=0; i<10; i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
int main()
{
int a[11],i;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
sort_ascending(a);
sort_descending(a);
return 0;
}
