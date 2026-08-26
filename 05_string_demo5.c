//#include<stdio.h>
//
//int main()
//{
//	printf("请输入一个字符串:\n");
//	char str[100];
//	scanf("%s", str);
//	int bigCount = 0;
//	int smallCount = 0;
//	int numberCount = 0;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		char c = str[i];
//		if (c >= 'A' && c <= 'Z')
//		{
//			bigCount++;
//		}
//		else if (c >= 'a' && c <= 'z')
//		{
//			smallCount++;
//		}
//		else if (c >= '0' && c <= '9')
//		{
//			numberCount++;
//		}
//	}
//	printf("输入的字符串中有%d个大写字母\n", bigCount);
//	printf("输入的字符串中有%d个小写字母\n", smallCount);
//	printf("输入的字符串中有%d个数字\n", numberCount);
//	return 0;
//}