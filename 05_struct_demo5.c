//#include<stdio.h>
//#include<string.h>
//struct Message
//{
//	char phone[12];
//	char mail[100];
//};
//struct Student
//{
//	char name[100];
//	int age;
//	char gender;
//	double height;
//	struct Message msg;
//};
//int main()
//{
//	struct Student stu;
//	strcpy(stu.name, "zhangsan");
//	stu.age = 23;
//	stu.gender = 'M';
//	stu.height = 1.78;
//	strcpy(stu.msg.phone, "01234567890");
//	strcpy(stu.msg.mail, "01234567890@qq.com");
//	printf("学生的信息为:\n");
//	printf("姓名为:%s\n", stu.name);
//	printf("年龄为:%d\n", stu.age);
//	printf("性别为:%c\n", stu.gender);
//	printf("身高为:%lf\n", stu.height);
//	printf("电话号码为:%s\n", stu.msg.phone);
//	printf("邮箱号为:%s\n", stu.msg.mail);
//	printf("---------------------------------------\n");
//	struct Student stu2 = { "lisi",24,'M',1.80,{"13112347890","56789@qq.com"} };
//	printf("学生的信息为:\n");
//	printf("姓名为:%s\n", stu2.name);
//	printf("年龄为:%d\n", stu2.age);
//	printf("性别为:%c\n", stu2.gender);
//	printf("身高为:%lf\n", stu2.height);
//	printf("电话号码为:%s\n", stu2.msg.phone);
//	printf("邮箱号为:%s\n", stu2.msg.mail);
//	return 0;
//}