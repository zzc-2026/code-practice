//#include<stdio.h>
//int add(int num1, int num2);
//int subtract(int num1, int num2);
//int multiply(int num1, int num2);
//int divide(int num1, int num2);
//int main()
//{
//	int (*p[4])(int, int) = { add,subtract,multiply,divide };
//	int num1;
//	int num2;
//	printf("请输入两个数字用来计算:");
//	scanf("%d %d", &num1, &num2);
//	/*printf("%d\n", num1);
//	printf("%d\n", num2);*/
//	int choose;
//	printf("请输入一个数字表示要进行的运算:");
//	scanf("%d", &choose);
//	if (choose < 1 || choose > 4)
//	{
//		printf("输入内容错误\n");
//		return 0;
//	}
//	if (num2 == 0 && choose == 4)
//	{
//		printf("输入内容错误\n");
//		return 0;
//	}
//	int res = (p[choose - 1])(num1, num2);
//	printf("计算的结果是:");
//	printf("%d\n", res);
//	return 0;
//}
//int add(int num1, int num2)
//{
//	return num1 + num2;
//}
//int subtract(int num1, int num2)
//{
//	return num1 - num2;
//}
//int multiply(int num1, int num2)
//{
//	return num1 * num2;
//}
//int divide(int num1, int num2)
//{
//	return num1 / num2;
//}