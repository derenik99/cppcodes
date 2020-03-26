/*
FIRST ORDER DERIVATIVE CALCULATION BY FIRST AND SECOND 
ORDER NUMERICAL MODELS
* dr1 and dr2 are f(x) function first order derivative values calculated
by the first and the second order numerical models respectively
* deriv(x) is the analytic expression for the mentioned derivative
* diff1 and diff2 are the differences between derivative value given by
 analytic formula [by deriv(x)] and values coming from the first and the
 second numerical models respectively (values of drv1 and drv2 respectively)

 */

#include <iostream>
#include <math.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;


double f(double u) {return sin(u);}
double deriv(double u) {return cos(u);}

int main()
{
	 double x,dx, drv1, drv2, diff1,diff2;
	cout<<"x= "; cin>>x;
	cout<<"dx= "; cin>>dx;
	drv1 = (f(x+dx)-f(x))/dx;
	drv2 = ( f(x+dx/2) - f(x-dx/2) )/dx;
	diff1 = deriv(x) -drv1;
	diff2 = deriv(x)-drv2;

	//

	cout<<"drv1= "<<drv1<<std::setw(12)<<"drv2= "<<drv2<<endl;
	
	cout<<"diff1= "<<diff1<<std::setw(12)<<"diff2= "<<diff2<<endl;
	//std::getchar("print");
	system("pause");
	return 0;
}