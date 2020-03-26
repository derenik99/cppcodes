#include <iostream>
#include <stdlib.h>
#include <time.h>
using std::cout;
using std::endl;
int main()
{
	int arr[10], i,min;
	srand (time(NULL));
	for (i=0;i<=9;i++)
	{
		arr[i] = rand()% 14+4 ; // first number is upper limit second is lower limit
		cout<<arr[i]<<endl; 
	}
	min = arr[0];
	for (int j=0;j<=9;j++)
	{
		if (arr[j]<min)
			{min=arr[j];}
	}
	cout<<endl<<"min= "<<min<<endl;
system("pause");
	return 0;
}