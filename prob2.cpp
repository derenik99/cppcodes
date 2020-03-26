
#include <iostream>
#include <math.h>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
long double f( double t ) {return pow(t,3)+pow(t,2);}
long double integral( double t) {return pow(t,4)/4+pow(t,3)/3;}

int main()
{
	double x, dx, a,b,rec2,trap,simps,q,i;

	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	cout<<"dx= "; cin>>dx;

	if ((b-a)*dx<=0)
	{cout<<"The condition (b-a)*dx>0 is not satisfied"; goto L;}
	
	if (fabs(b-a)<fabs(dx))
	{cout<<"The condition fabs(b-a)>=fabs(dx) is not satisfied";goto L;}
	
	rec2=trap=0;

	for (x=a;fabs(x-b)>=0.5*fabs(dx); x = x+dx)
	{
		
		rec2 = rec2 +f(x+dx/2)*dx;
		trap = trap+ 0.5*(f(x)+f(x+dx))*dx;
	}

	simps = (2*rec2+trap)/3; 
	i = integral(x)-integral(a);
	q = (i-trap)/(i-rec2);

	cout<<"x= "<<x<<setw(4)<<"i= "<<i<<setw(4)<<"q= "<<q<<endl
	<<setw(12)<<"simps= "<<simps<<endl<<"i-simps= "<<i-simps<<endl;

	system("pause");
	L: return 0;
}