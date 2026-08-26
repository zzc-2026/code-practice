//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* p = &a;
//	int** pp = &p;
//	*pp = &b;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%p\n", p);
//	printf("%p\n", *pp);
//	printf("%d\n", **pp);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 10,20,30,40,50 };
//	int len = sizeof(arr) / sizeof(int);
//	int* p1 = arr;
//	//int* p2 = &arr[0];
//	//printf("%p\n", p1);
//	//printf("%p\n", p2);
//	/*printf("%d\n", *p1);
//	printf("%d\n", *(p1 + 1));
//	printf("%d\n", *(p1 + 2));
//	printf("%d\n", *(p1 + 3));
//	printf("%d\n", *(p1 + 4));*/
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", *p1++);
//		//p1++;
//	}
//	return 0;
//}