#include <iostream>
#include <stdlib.h>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int arr[10][10], i,j;
	for (i=0;i<10; i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j)
				{arr[i][j]=i+1;}
			else
				{arr[i][j]=0;}
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	
	return 0;
}