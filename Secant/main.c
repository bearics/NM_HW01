#include <math.h>
#include <stdio.h>

double f(double x) { return x * x*x + 4 * x*x - 10; }

double secant(double a, double b)
{ // input a = Pn, b = P(n-1)
	return (b - (f(b)*(b - a)) / (f(b) - f(a)));
}

void compute()
{	// secant method
	double p1 = 1, p2 = 2;


	printf("n         pn            f(pn)\n");
	for (int i = 2; i < 7; i++)
	{
		double pn = secant(p1, p2);

		printf("%2d\t%.10f\t%.10f\n", i,pn,f(pn));
		p1 = pn;
	}
}

void main()
{
	compute();

	while (1)
	{

	}
	return 0;
}