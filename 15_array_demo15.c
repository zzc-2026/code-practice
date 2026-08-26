#include<stdio.h>

int main()
{
	int arr[] = { 3,5,2,1,4 };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				int num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}
	for (int a = 0; a < len; a++)
	{
		printf("%d\n", arr[a]);
	}
	return 0;
}