#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(void) {
	int n;
	long double sum = 0, x, k;
	scanf("%lf", &x);
	long double epsilon = 0.000001;
	int i = 1;
	do {
		if (i == 1) {
			k = x;
		}
		else {
			k *= x * x;
			k /= (i - 1) * i;
		}

		if (i % 4 == 1) {
		//pos
			sum += k;
		}
		else if (i % 4 == 3) {
		//neg
			sum -= k;
		}
		i += 2;
	} while (k >= epsilon);
	printf("%lf", sum);
	return 0;
}

