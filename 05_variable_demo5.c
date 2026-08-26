//#include<stdio.h>
//
//int main()
//{
//	//int a = 10;
//	//int b = a++;
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	//int a = 10;
//	//int b = ++a;
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//11
//	//int a = 10;
//	//int b = a++;
//	//int c = ++a;
//	//printf("%d\n", a);//12
//	//printf("%d\n", b);//10
//	//printf("%d\n", c);//12
//	//int i = 10;
//	//int j = 5;
//	//int k = i++ + ++i - --j - i--;//11+11-4-11
//	//printf("%d\n", k);
//	//int a = 10;
//	//int k1 = a++ + ++a;//11+11=22
//	//int k2 = a++ + a++;//12+12=24
//	//int k3 = ++a + ++a;//16+16=32
//	//int k4 = ++a + a++;//17+17=34
//	//printf("%d\n", k1);
//	//printf("%d\n", k2);
//	//printf("%d\n", k3);
//	//printf("%d\n", k4);
//	int a = 10;
//	int k1 = a++ + a++ + a;//10+10+10=30(a=12)
//	int k2 = ++a + ++a + a;//14+14+14=42(a=14)
//	int k3 = ++a + a++ + a;//15+15+15=45(a=16)
//	int k4 = a++ + ++a + a;//17+17+17=51(a=18)
//	printf("%d\n", k1);
//	printf("%d\n", k2);
//	printf("%d\n", k3);
//	printf("%d\n", k4);
//	return 0;
//}