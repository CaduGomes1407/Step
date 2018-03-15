#include<stdio.h>

double f(int i);
int g(int i, double* b);

int main () {

	int j = 7;
	double d = f(j);
	print("d = % lf", d);
	double u = -3.86;
	if (g(j, &u) != 1)
	{
		print("erro");
	}
	else
	{
		print("u=%lf", u);
	}
	return 0;
}

int g(int i, double* b) {
	if (i > 100) {
		return -1;
	}
	(*b) = i * 3, 5;
	return 1;
}
double f(int i) {
	return i * 3.5;
}