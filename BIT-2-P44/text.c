#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ָ����ҵ
//int main()
//{
//	unsigned long pulArry[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArry;//ָ����Ԫ�ص�ַ6
//	*(pulPtr + 3) += 3;//ָ��9�ĵ�ַ���ٽ����÷���9���ټ�3����12
//
//	printf("%d ,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//дһ���������������ַ�������
//#include <string.h>
//#include <assert.h>
//
//void reverse(char*str)
//{
//	assert(str);//����
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
//	gets(arr);//��ȡһ��
//	//������
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa...,a����������
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

//��1-10000֮�����е�ˮ�ɻ���
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ�� - nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);	//pow���ص���double����
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//}

//��ӡ���ε�ͼ��
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*(line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���׽ṹ����ҵ
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

//�����������ʲô��
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

//����ˮ���⡣
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ������20Ԫ�����Զ���ƿ��ˮ��
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//��ص���ˮ�ȵ�
//	total = money;
//	empty = money;
//	//����������ˮ
//	// ����һ
//	//while (empty>=2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	//����2
//	if (money == 0)total = 0;
//	else total = 2 * money - 1;
//	
//	printf("total=%d\n", total);
//	return 0;
//}

//ʹ�õ��Լ��ɣ����ף���ҵ
//�������飬ʹ���������ȫ��λ��ż��ǰ��
//void move(int* arr, int sz)
//{
//	//1.�ȴ���߿�ʼ��һ��ż��
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))//(left < right)��ֹȫ������������Խ��
//		{
//			left++;
//		}
//		//2.���ұ߿�ʼ��һ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//3.�����ǽ���
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


