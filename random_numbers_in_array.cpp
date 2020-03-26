#include <iostream>
#include <stdlib.h>
#include <time.h>
using std::cout;
using std::endl;
int main()
{
	int arr[10], i;
	srand (time(NULL));
	for (i=0;i<=9;i++)
	{
		arr[i] = rand()% 14+4 ; // first number is upper limit second is lower limit
		cout<<arr[i]<<endl; 
	}

system("pause");
	return 0;
}