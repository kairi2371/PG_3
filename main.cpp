#include <stdio.h>
#include "Math.h"

int main() {

	Math<int, int>num1(3, 5);
	Math<float, float>num2(1.5f, 2.1f);
	Math<double, double>num3(2.5f, 5.1f);
	Math<int, float>num4(5, 4.8f);
	Math<int, double>num5(6,7.9f);
	Math<float, double>num6(5.4f, 7.5f);

	printf("%d\n", num1.Min());
	printf("%f\n", num2.Min());
	printf("%f\n", num3.Min());
	printf("%d\n", num4.Min());
	printf("%d\n", num5.Min());
	printf("%f\n", num6.Min());
}