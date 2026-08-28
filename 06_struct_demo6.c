//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//struct spot
//{
//	char name[100];
//	int count;
//};
//int main()
//{
//	struct spot arr[4] = { {"A",0},{"B",0}, {"C",0}, {"D",0} };
//	srand(time(NULL));
//	for (int i = 0; i < 80; i++)
//	{
//		int choose = rand() % 4;	
//		arr[choose].count++;
//	}
//	int max = arr[0].count;
//	for (int i = 1; i < 4; i++)
//	{
//		struct spot temp = arr[i];
//		if (temp.count > max)
//		{
//			max = temp.count;
//		}
//	}
//	//printf("%d\n", max);
//	for (int i = 0; i < 4; i++)
//	{
//		struct spot temp = arr[i];
//		if (temp.count == max)
//		{
//			printf("投票最多的景点为%s,共计%d张票\n", temp.name, temp.count);
//			break;
//		}
//	}
//	printf("-----------------------\n");
//	for (int i = 0; i < 4; i++)
//	{
//		struct spot temp = arr[i];
//		printf("%s %d\n", temp.name, temp.count);
//	}
//
//	return 0;
//}