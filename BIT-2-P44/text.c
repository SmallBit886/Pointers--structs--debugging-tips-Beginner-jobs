#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//初阶指针作业
//int main()
//{
//	unsigned long pulArry[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArry;//指向首元素地址6
//	*(pulPtr + 3) += 3;//指向9的地址，再解引用访问9，再加3，是12
//
//	printf("%d ,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//写一个函数可以逆序字符串内容
//#include <string.h>
//#include <assert.h>
//
//void reverse(char*str)
//{
//	assert(str);//断言
//	int len = strlen(str);
//	char* left = str;
//	char* right = str+len-1;
//	while (right > left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);//abcdefg  ---  gfedcba
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa...,a是任意数字
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//求1-10000之间所有的水仙花数
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		//判断i是否为水仙花数；自幂数；
//		//1.计算i的位数 - n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.计算i的每一位的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);	//pow返回的是double类型
//			tmp /= 10;
//		}
//		//3.比较i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//打印菱形的图案
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j <2*(line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//初阶结构体作业
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", (*p).a);//99
//	return 0;
//}

//下面结果输出是什么？
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu student[3] = { {9801,"A",20},{9802,"B",10},{9803,"C",19} };
//	fun(student + 1);//B
//	return 0;
//}

//喝汽水问题。
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给你20元，可以多少瓶汽水？
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//买回的汽水喝掉
//	total = money;
//	empty = money;
//	//换回来的汽水
//	// 方法一
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//方法2
//	if (money == 0)total = 0;
//	else total = 2 * money - 1;
//	
//	printf("total=%d\n", total);
//	return 0;
//}

//使用调试技巧（初阶）作业
//调整数组，使数组的奇数全部位于偶数前面
//void move(int* arr, int sz)
//{
//	//1.先从左边开始找一个偶数
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))//(left < right)防止全是奇数，发生越界
//		{
//			left++;
//		}
//		//2.从右边开始找一个奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//3.把他们交换
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}


