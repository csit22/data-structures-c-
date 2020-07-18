#include<stdio.h>
#include<conio.h>

void main(){
   clrscr();
   const int SIZE = 10;
   int n=5;
   int arr[SIZE],i,ele;
   arr[0]=10;
   arr[1]=20;
   arr[2]=30;
   arr[3]=40;
   arr[4]=50;

   ele=40;

   printf("Array Elements are");
   for(i=0;i<n;i++)
    printf("\n%d",arr[i]);

   for(i=0;i<n;i++){
	if(ele == arr[i]){
	printf("\nElement found at position %d",i+1);
	return;
	}
   }
   printf("Element not found.");
}