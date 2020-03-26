

#include <iostream>
#include <math.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


double f(double u) {return sin(pow(u,2));}
double deriv(double u) {return 2*u*cos(pow(u,2));}

int main()
{
	 double x,dx, deriv_result1, deriv_result2, diff1,diff2;
	cout<<"x= "; cin>>x;
	cout<<"dx= "; cin>>dx;
	deriv_result1 = (f(x+dx)-f(x))/dx; // derivative result by first order
	deriv_result2 = ( f(x+dx/2) - f(x-dx/2) )/dx; //derivative result by second order
	diff1 = deriv(x) -deriv_result1;
	diff2 = deriv(x)-deriv_result2;

	//

	cout<<"deriv_result1= "<<deriv_result1<<std::setw(12)<<"deriv_result= "<<deriv_result2<<endl;
	
	cout<<"diff1= "<<diff1<<std::setw(12)<<"diff2= "<<diff2<<endl;
	//std::getchar("print");
	system("pause");
	return 0;
}

