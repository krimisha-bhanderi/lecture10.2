#include<stdio.h>


int Length(char string[]);

int main() {
   char string[100];
   int length;

   printf("Enter the String : ");
   gets(string);

   length = Length(string);

   printf("Length of the String is : %d", length);
   
}

int Length(char string[]) {
   int l= 0;
   while (string[l] !=0)
      l++;
  return l;
}

    
