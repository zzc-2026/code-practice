//#include<stdio.h>
//#include<string.h>
//typedef struct Student
//{
//	char name[100];
//	int age;
//} S;
////void method1(S st);
//void method2(S* p);
//int main()
//{
//	S stu;
//	strcpy(stu.name, "aaa");
//	stu.age = 0;
//	printf("学生初始数据值为:%s,%d\n", stu.name, stu.age);
//	method2(&stu);
//	printf("学生的数据修改为:%s,%d\n", stu.name, stu.age);
//	return 0;
//}
////void method1(S st)
////{
////	printf("接收到main函数中学生的初始数据值为%s,%d\n", st.name, st.age);
////	printf("请输入要修改学生的名字:\n");
////	scanf("%s", st.name);
////	printf("请输入要修改学生的年龄:\n");
////	scanf("%d", &(st.age));
////	printf("在method函数中修改后学生的数据值为%s,%d\n", st.name, st.age);
////}
//void method2(S* p)
//{
//	printf("接收到main函数中学生的初始数据值为%s,%d\n", (*p).name, (*p).age);
//	printf("请输入要修改学生的名字:\n");
//	scanf("%s", (*p).name);
//	printf("请输入要修改学生的年龄:\n");
//	scanf("%d", &((*p).age));
//	printf("在method函数中修改后学生的数据值为%s,%d\n", (*p).name, (*p).age);
//}