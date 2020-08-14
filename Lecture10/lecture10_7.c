#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double average(double* arr, int n);			// 보통은 *을 자주 사용한다.

/* 두개의 포인터로 배열을 함수에게 전달하는 방법 */
double avg_two_ptr(double* start, double* end);

//double average(double arr[], int n);






int main()
{
	double arr1[5] = { 10, 13, 12, 7, 8 };
	double arr2[5] = { 1.8, -0.2, 6.3, 13.9, 20.5 };
	//double arr3[3] = { 1.8, -0.2, 6.3 };			// size is different

	printf("Avg = %f\n", average(arr1, 5));
	printf("Avg = %f\n", average(arr2, 5));

	/* 두개의 포인터로 배열을 함수에게 전달하는 방법 */
	printf("Avg = %f\n", avg_two_ptr(arr1, arr1 + 5));

	return 0;
}


double average(double* arr, int n)
{
	printf("Address = %p\n", arr);
	printf("Size = %zd in function average\n", sizeof(arr));

	double avg = 0.0;
	for (int i = 0; i < n; i++)
	{
		avg += arr[i];
	}
	avg /= (double)n;

	return avg;
}

double avg_two_ptr(double* start, double* end)
{
	int count = end - start;
	double avg = 0.0;
	while (start < end)
	{
		avg += *start++;
		//count++;
	}
	avg /= (double)count;

	return avg;
}