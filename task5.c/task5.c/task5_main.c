#include <stdio.h>
#include "task5.h"

void main() {
	double x = 3, F;
	F = f(x);
	printf("%0.4f\n", F);
	scanf("%Lf", &x);
	F = f(x);
	printf("%0.4f\n", F);
	system("pause");
}