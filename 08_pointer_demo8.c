//#include<stdio.h>
//void swap(void* p1, void* p2, int len);
//int main()
//{
//	long long a = 100LL;
//	long long b = 200LL;
//	swap(&a, &b, 8);
//	printf("%lld\n", a);
//	printf("%lld\n", b);
//	return 0;
//}
//void swap(void* p1, void* p2, int len)
//{
//	char* cp1 = p1;
//	char* cp2 = p2;
//	int temp = 0;
//	for (int i = 0; i < len; i++)
//	{
//		temp = *cp1;
//		*cp1 = *cp2;
//		*cp2 = temp;
//		cp1++;
//		cp2++;
//	}
//}