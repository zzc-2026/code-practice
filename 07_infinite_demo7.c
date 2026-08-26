//#include<stdio.h>
//
//int main()
//{
//	/*for (int i = 1; i <= 1000; i++)
//	{
//		int ge = i % 10;
//		int shi = i / 10 % 10;
//		int bai = i / 100 % 10;
//		int qian = i / 1000 % 10;
//		if (ge + shi + bai + qian == 15)
//		{
//			printf("%d\n", i);
//		}
//	}*/
//	for (int i = 1; i <= 1000; i++)
//	{
//		int sum = 0;
//		int j = i;
//		while (j != 0)
//		{
//			int num = j % 10;
//			j = j / 10;
//			sum = sum + num;
//		}
//		if (sum == 15)
//		{
//			printf("%d\n", i);
//		}
//	}
//	
//	return 0;
//}