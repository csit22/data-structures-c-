#include<stdio.h>
#include<conio.h>

void main(){
   clrscr();
   const int SIZE = 6;
   int n=5;
   int arr[SIZE],i,pos;
   arr[0]=10;
   arr[1]=20;
   arr[2]=30;
   arr[3]=40;
   arr[4]=50;

   pos=3;

   printf("Array Before Deletion");
   for(i=0;i<n;i++)
    printf("\n%d",arr[i]);

   if(pos<1 || pos>n){
   printf("Element cannot be deleted.Position Not Valid");
   return;
   }

   for(i=pos-1;i<n-1;i++)
   arr[i]=arr[i+1];

   n--;

   printf("\nArray After Deletion");
   for(i=0;i<n;i++)
   printf("\n%d",arr[i]);
}