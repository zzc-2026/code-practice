//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p1 = malloc(10 * sizeof(int));
//	printf("最初的内存地址为:%p\n", p1);
//	int size = 10;
//	for (int i = 0; i < size; i++)
//	{
//		*(p1 + i) = (i + 1) * 10;
//	}
//	int* p2 = realloc(p1, 20 * sizeof(int));
//	printf("修改之后的内存地址为:%p\n", p2);
//	size = 20;
//	printf("遍历空间中的数据:\n");
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d\n", *(p2 + i));
//	}
//	printf("\n");
//	free(p2);
//	return 0;
//}