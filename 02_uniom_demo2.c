//#include<stdio.h>
//union MoneyType
//{
//	int moneyi;
//	double moneyd;
//	char moneystr[100];
//};
//int main()
//{
//	union MoneyType money;
//	printf("%p\n", &(money.moneyi));
//	printf("%p\n", &(money.moneyd));
//	printf("%p\n", &(money.moneystr));
//	printf("%zu\n", sizeof(money.moneyi));
//	printf("%zu\n", sizeof(money.moneyd));
//	printf("%zu\n", sizeof(money.moneystr));
//	printf("%zu\n", sizeof(money));
//	money.moneyi = 99;
//	money.moneyd = 1.23;
//	printf("%lf\n", money.moneyd);
//	//printf("%d\n", money.moneyi);
//	return 0;
//}