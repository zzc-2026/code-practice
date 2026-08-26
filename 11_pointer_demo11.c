//#include<stdio.h>
//
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[5] = { 1,2,3,4,5 };
//	int arr3[9] = { 1,2,3,4,5,6,7,8,9 };
//	int* arr[3] = {arr1,arr2,arr3};
//	int len1 = sizeof(arr1) / sizeof(int);
//	int len2 = sizeof(arr2) / sizeof(int);
//	int len3 = sizeof(arr3) / sizeof(int);
//	int getArr[3] = { len1,len2,len3 };
//	for (int i = 0; i < 3; i++)
//	{	
//		for (int j = 0; j < getArr[i]; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}