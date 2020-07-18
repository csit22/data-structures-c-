#include<stdio.h>
#include<conio.h>

void main(){
   clrscr();
   const int SIZE = 6;
   int n=5;
   int arr[SIZE],i,pos,ele;
   arr[0]=10;
   arr[1]=20;
   arr[2]=30;
   arr[3]=40;
   arr[4]=50;

   pos=3;
   ele=44;

   printf("Array Before Updation");
   for(i=0;i<n;i++)
    printf("\n%d",arr[i]);

   if(pos<1 || pos>n){
   printf("Element cannot be updated.Position Not Valid");
   return;
   }

   arr[pos-1]=ele;

   printf("\nArray After Updation");
   for(i=0;i<n;i++)
   printf("\n%d",arr[i]);
}