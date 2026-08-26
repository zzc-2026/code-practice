//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,9,5,7,3,4,8,2,6 };
//	int len = sizeof(arr) / sizeof(int);
//	for (int j = 0; j < len - 1; j++)
//	{
//		for (int i = 0; i < len - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int num = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = num;
//			}
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}