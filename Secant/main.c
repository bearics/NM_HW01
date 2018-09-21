#include <math.h>
#include <stdio.h>

double f(double x) { return x * x*x + 4 * x*x - 10; }	// example function
double secant(double a, double b) { return (b - (f(b)*(b - a)) / (f(b) - f(a))); }	 
// secant formulation,  input a = Pn, b = P(n-1)

void compute()
{	// secant method
	double p1 = 1, p2 = 2;
	double TOL = 0.0005;
	int n = 1;	// count number 
	printf(" n            pn             f(pn)\n");
	while (n++)
	{
		double pn = secant(p1, p2);
		printf("%2d\t%.10f\t%.10f\n", n, pn, f(pn));
		if (fabs(p2 - pn) < TOL)
			break;	// If p_n - p_(n-1) is less than tolerance, stop calc.
		p1 = p2;  p2 = pn;	// Update variables
	}
}

void main()
{
	compute();

	return 0;
}