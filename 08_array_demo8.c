//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int contains(int arr[], int len, int num);
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	srand(time(NULL));
//	for (int i = 0; i < len; )
//	{
//		int num = rand() % 100 + 1;
//		int flag = contains(arr, len, num);
//		if (!flag)
//		{
//			arr[i] = num;
//			i++;
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	printf("-------------------\n");
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d\n", sum);
//	printf("-------------------\n");
//	double avg = sum / len;
//	printf("%lf\n", avg);
//	printf("-------------------\n");
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] < avg)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int contains(int arr[], int len, int num)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == num)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}