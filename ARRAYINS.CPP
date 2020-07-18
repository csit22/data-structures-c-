#include<stdio.h>
#include<conio.h>

void main(){
   clrscr();
   const int SIZE = 7;
   int n=5;
   int arr[SIZE],i,pos,ele;
   arr[0]=10;
   arr[1]=20;
   arr[2]=30;
   arr[3]=40;
   arr[4]=50;

   pos=3;
   ele=44;

   printf("Array Before Insertion");
   for(i=0;i<n;i++){
    printf("%d",arr[i]);
    printf("\n");
   }

   if(pos<1 || pos>n+1){
   printf("Element cannot be inserted.Position Not Valid");
   return;
   }
   if(n==SIZE){
   printf("Array is full.No more element can be inserted.");
   return;
   }
   for(i=n;i>=pos;i--)
   arr[i]=arr[i-1];

   arr[pos-1]=ele;
   n++;

   printf("Array After Insertion");
   for(i=0;i<n;i++){
   printf("%d",arr[i]);
   printf("\n");
   }
}