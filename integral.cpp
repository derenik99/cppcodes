/*
CALCULATION OF INTEGRAL OF FUNCTION f(x)
FROM a TO b

*Integral(x) is the indefinite integral analytic expression
* rec1 and rec2 are integral values coming from the first and 
the second order
rectangle schemes respectively
*trap is the integral value coming from the trapezium scheme
*simps is the integral value coming from Simpson formula
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
long double f(long double t ) {return pow(t,7);}
long double integral(long double t) {return pow(t,8)/8;}

int main()
{
	long double x, dx, a,b,rec1,rec2,trap,simps,q,i;

	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	cout<<"dx= "; cin>>dx;

	if ((b-a)*dx<=0)
	{cout<<"The condition (b-a)*dx>0 is not satisfied"; goto L;}
	
	if (fabs(b-a)<fabs(dx))
	{cout<<"The condition fabs(b-a)>=fabs(dx) is not satisfied";goto L;}
	
	rec1 = rec2=trap=0;

	for (x=a;fabs(x-b)>=0.5*fabs(dx); x = x+dx)
	{
		rec1 = rec1+ f(x)*dx;
		rec2 = rec2 +f(x+dx/2)*dx;
		trap = trap+ 0.5*(f(x)+f(x+dx))*dx;
	}

	simps = (2*rec2+trap)/3;
	i = integral(x)-integral(a);
	q = (i-trap)/(i-rec2);

	cout<<"x= "<<x<<setw(12)<<"i= "<<i<<setw(12)<<"q= "<<q<<endl
	<<"i-rec1= "<<i-rec1<<setw(12)<<"i-rec2= "<<i-rec2<<setw(12)<<"i-trap= "<<
	i-trap<<endl<<"i-simps= "<<i-simps<<endl;

	system("pause");
	L: return 0;
}