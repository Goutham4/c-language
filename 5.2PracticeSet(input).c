#include<stdio.h>

int main(){
   int length, breadth;

   printf("Enter the length of the rectangle\n");
   scanf("%d", &length);
   
   printf("Enter the breadth of the rectangle\n");
   scanf("%d", &breadth);
   
   int area = length * breadth; //remove this line if you use the comment mentioned below.

   printf("The area of the rectangle is %d", area);  //or printf("The area of the rectangle is %d", length*breadth);
    return 0;
}
