//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	//int* p = calloc(10, sizeof(int));
//	printf("%p\n", p);
//	//printf("%d\n", *p);
//	for (int i = 0; i < 10; i++)
//	{
//		//*(p + i) = (i + 1) * 10;
//		p[i] = (i + 1) * 10;
//		//i[p] = (i + 1) * 10;
//	}
//	int* pp = realloc(p, 20 * sizeof(int));
//	for (int i = 0; i < 20; i++)
//	{
//		//printf("%d\n", *(p + i));
//		printf("%d\n", p[i]);
//	}
//	free(pp);
//	return 0;
//}