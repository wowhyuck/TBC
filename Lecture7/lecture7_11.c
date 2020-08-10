#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <float.h>


int main()
{
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float input;
	int n = 0;

	while (scanf("%f", &input) == 1)
	{
		// TODO: ignore negative values
		if (input < 0.0f || input > 100.0f)
			continue;

		max = (max > input) ? max : input;
		min = (min < input) ? min : input;
		sum += input;

		n++;	// Count number of inputs
	}

	if (n > 0)
		printf("min = %f, max = %f, ave = %f\n", min, max, sum / n);
	else
		printf("No input\n");

	return 0;
}