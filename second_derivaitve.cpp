/*
Second ORDER DERIVATIVE CALCULATION BY FIRST AND SECOND 
ORDER NUMERICAL MODELS
* drv1l and drv1r are f(x) function first order derivative values calculated
by the first order numerical model for the left and right sides from
x point respectively
*drv2a and drv2b are f(x) function second order derivative values 
calcualted by the first and second order numerical models respectively
* deriv(x) is the analytic expression for the mentioned derivative
* diff1 and diff2 are the differences between second order derivative value
 given by  analytic formula [by deriv(x)] and values coming from the first
  and the second order numerical models for second order derivative
   respectively (values of drv2a and drv2b respectively)
* rl is the ratio of dxr to dxl where dxl and dxr are used for calculation
of drv1l and drv1r respectively
 */

#include <iostream>
#include <math.h>
#include <iomanip>
0
using std::cout;
using std::cin;
using std::endl;


double f(double u) {return sin(u);}
double deriv(double u) {return -sin(u);}

int main()
{
	 double x,dxl,dxr,rl, drv1l, drv1r, drv2a,drv2b, diff1,diff2;
	cout<<"x= "; cin>>x;
	cout<<"dxl= "; cin>>dxl;
	cout<<"rl= "; cin>>rl;
	dxr = rl*dxl;

	drv1l = ( f(x)-f(x-dxl) )/dxl;
	drv1r = ( f(x+dxr) - f(x) )/dxr;
	drv2a = (drv1r-drv1l)/(0.5*(dxl+dxr));
	drv2b = (f(x+dxl)-2*f(x) + f(x-dxl))/pow(dxl,2);
	diff1 = drv2a- deriv(x);
	diff2 = drv2b -deriv(x);

	//

	cout<<"drv2a= "<<drv2a<<std::setw(12)<<"drv2b= "<<drv2b<<endl;
	
	cout<<"diff1= "<<diff1<<std::setw(12)<<"diff2= "<<diff2<<endl;
	//std::getchar("print");
	system("pause");
	return 0;
}