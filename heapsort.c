#include<stdio.h>

void insert(int a[],int n)
{
	int i=n;
	int temp=a[i];
	while(i>1 && temp >a[i/2])
	{
	    a[i]=a[i/2];
		i=i/2;	
	}
	a[i]=temp;
}

int delete(int a[],int n)
{
	int temp=a[1];

	int i,j;
                 a[1]=a[n];
                  a[n]=temp;
                  i=1;j=i*2;
	while(j < n-1)
	{
		if(a[j+1] > a[j])
		{
			j=j+1;
		}
	   if(a[i] <a[j])
	   {
	   	  int p=a[i];
	   	  a[i]=a[j];
	   	  a[j]=p;
	   	  i=j;
	   	  j=2*j;

	   }
	   else 
	   break;
	}
                   
	 
}

int main()
{
	int a[]={0,10,20,30,40,50};
	int i;
	 
	for(i=2;i<=5;i++)
	{
		insert(a,i);
	}
	
	for(i=5;i>1;i--)
	{
		delete(a,i);
	}
 
	
	for(i=1;i<=5;i++)
                  printf(" %d ",a[i]);	
	
	
	
}
