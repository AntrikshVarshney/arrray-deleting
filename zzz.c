#include <stdio.h>
void main()
{
 int ar[100],n,i,new,position;
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
 	scanf("%d",&ar[i]);
 }

 printf("Enter the new vales");
 scanf("%d",&new);

 printf("Enter the position at which u want to insert the vales");
 scanf("%d",&position);

 for(i=(n-1);i>=(position-1);i--)

 	ar[i+1]=ar[i];
    ar[position]=new;

 printf("New Array");

for(i=0;i<=n;i++)
{
	printf("%d",ar[i]);
}

}