#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MONTHS 12
#define YEARS 3


int main()
{
	/* 10.5: 2차원 배열과 메모리 */
	//int arr[2][3] = { {1, 2, 3},
	//				  {4, 5, 6} };

	////arr[2][3] = { 1, 2, 3, 
	////			    4, 5, 6 };
	////arr[2][3] = { 1, 2 };		// insufficient initializer

	//printf("%d\n\n", arr[1][1]);

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//		printf("%d ", arr[i][j]);
	//	printf("\n");
	//}
	//// Note: inner loop uses j. why?

	//int* ptr = &arr[0][0];
	//for (int k = 0; k < 6; k++)
	//	printf("%d ", ptr[k]);
	//printf("\n\n");

	//printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));

	///* 3D array */
	//int arr_3d[2][3][4] = {
	//						{
	//							{000, 001, 002, 003},
	//							{010, 011, 012, 013},
	//							{020, 021, 022, 023},
	//													},
	//						{
	//							{100, 101, 102, 103},
	//							{110, 111, 112, 113},
	//							{120, 121, 122, 123},
	//													}
	//														};

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		for (int k = 0; k < 4; k++)
	//			printf("%d ", arr_3d[i][j][k]);
	//		printf("\n");
	//	}
	//	printf("\n");
	//}


	/* 10.6: 2차원 배열 연습문제 */
	double year2016[MONTHS] = { -3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2 };
	double year2017[MONTHS] = { -1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9 };
	double year2018[MONTHS] = { -4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6 };

	/* 
		1. Use 2D array
		2. Print data
		3. Calculate and print yearly average temperatures of 3 years
		4. Calculate and print monthly average temperatures of 3 years
	*/

	/* Step 1 */
	double* temp_year[3] = { year2016, year2017, year2018 };

	/* Step 2 */
	printf("[Temperature Data]\n");
	printf("Year index\t:");
	for (int i = 0; i < MONTHS; i++)
	{
		printf("\t%d", i + 1);
	}
	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		printf("Year %d\t\t:", i);
		for (int j = 0; j < MONTHS; j++)
		{
			printf("\t%.1f", *(temp_year[i] + j));
		}
		printf("\n");
	}
	printf("\n");

	/* Step 3 */
	printf("[Yearly average temperatures of 3 years]\n");
	for (int i = 0; i < 3; i++)
	{
		double avg = 0;
		double sum = 0;
		printf("Year %d\t: ", i);
		for (int j = 0; j < MONTHS; j++)
		{
			sum += *(temp_year[i] + j);
		}
		avg = sum / (double)MONTHS;
		printf("average temperature = %.1f", avg);
		printf("\n");
	}
	printf("\n");

	/* Step 4 */
	printf("[Monthly average temperatures for 3 years]\n");
	printf("Year index\t:");
	for (int i = 0; i < MONTHS; i++)
	{
		printf("\t%d", i + 1);
	}
	printf("\n");

	double avg[MONTHS] = { 0 };
	printf("Avg temps\t: ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < MONTHS; j++)
		{
			avg[j] += *(temp_year[i] + j);

			if (i == 2)
			{
				avg[j] /= 3;
				printf("\t%.1f", avg[j]);
			}
		}
	}
	printf("\n");

	return 0;
}

