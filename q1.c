#include <stdio.h>
 
int Addition(int a[100],int n)
{
    int i;
	int sum=0;
    
     for(i=0;i<n;i++)
    {
         
        sum+=a[i];
    }
    return sum;
}
    
    
main(){
      
   int n;
   int i;
   
	printf("enter the array size: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("enter the elemnts of array A\n");
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
 printf("the Sum of the Array elements is:%d",Addition(a,n));
}
	

    
   
