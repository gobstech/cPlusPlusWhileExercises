#include <bits/stdc++.h>

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	double area = a * b;
	double perimetro = (a * 2) + (b * 2);
	printf("%lf %lf", area, perimetro);
	return 0;
}
