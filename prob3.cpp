#include <iostream>


using std::cout;


void sorted(int a[], int n)

{
	int i,j,min,temp;
	for (i=0;i<n-1;i++)
	{
		min = i;
		for (j=i+1;j<n;j++)
		
			if (a[j]<a[min])
				{min =j;}
		temp = a[i];
		a[i]= a[min];
		a[min]= temp;
	}
}

int main()
{



	int arr1[10] = {5,6,7,1,5,6,9,0,10,4}; 
	int arr2[10] = {4,5,2,6,7,2,9,1,0,10};
	int arr3[20];

// concentaaning 2 arrays
 for(int i=0; i<10; i++)
   {
      arr3[i] = arr1[i];   
   }
   
   for(int i=10; i<20; i++)
   {
      arr3[i] = arr2[i-10];   
   }
   
  

   sorted(arr3,20);
   for (int j=0;j<20;j++)
   {
   	cout<<arr3[j]<<std::endl;
   }
	return 0;
}