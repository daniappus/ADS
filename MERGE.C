#include<stdio.h>
#include<conio.h>
int merge[20];
void mergearray(int arr1[],int arr2[],int n1,int n2)
{
 int i,j,k;
 i=j=k=0;
{
 while(i<n1 && j<n2)
{
 if(arr1[i]<arr2[j])
 {
  merge[k++]=arr1[i++];
 }
 else
 merge[k++]=arr2[j++];
 }
}
 while(i<n1)
 {
 merge[k++]=arr1[i++];
 }
 while(j<n2)
 {
  merge[k++]=arr2[j++];
  }

 printf("\nMerged array");
 for(k=0;k<n1+n2;k++)
 {
  printf("%d ",merge[k]);
 }
}
void main()
{
int arr1[10],arr2[10],merge[20];
int i,j,n1,n2;
clrscr();
printf("\nEnter the size of first array: ");
scanf("%d",&n1);
printf("\nEnter the elements of first array in sorted array");
for(i=0;i<n1;i++)
{
 scanf("%d",&arr1[i]);
}
 printf("\nEnter the size ofsecond array");
scanf("%d",&n2);
printf("\nEnter the elements of second array in sorted array");
for(j=0;j<n2;j++)
{
 scanf("%d",&arr2[j]);
}
mergearray(arr1,arr2,n1,n2);
getch();
}



