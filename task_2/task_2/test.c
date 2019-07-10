#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
int add(int a, int b)//加法
{
	int re = a;
	while (b)
	{
		int tmp = a;
		a = a^b;
		b = (tmp&b) << 1;
		re = a;
	}
	return re;
}
int reduce(int a, int b)//减法
{
	b = add(~b, 1);
	return add(a, b);
}
void change(int a)
{
	int arr[9] = { 0 };
	int i = 8;
	int j = 0;
	while (1)
	{
		if (a < 0)
		{
			a = -a;
			j = 1;
		}
		arr[i] = a % 2;
		i = i - 1;
		a = a / 2;
		if (a == 0)
		{
			break;
		}
		else if (a < 2)
		{
			arr[i] = 1;
			break;
		}
	}
	if (j == 1)
	{
		arr[0] = 1;
	}
	for (i = 0; i < 9; i++)
	{
		printf("%d", arr[i]);
	}

	printf("\n");

}
void change0(int a, int b)//不带进位右移
{
	int arr[9] = { 0 };
	int arr0[9] = { 0 };
	int i = 8;
	int j = 0;
	while (1)
	{
		if (a < 0)
		{
			a = -a;
			j = 1;
		}
		arr[i] = a % 2;
		i = i - 1;
		a = a / 2;
		if (a == 0)
		{
			break;
		}
		else if (a < 2)
		{
			arr[i] = 1;
			break;
		}
	}
	if (j == 1)
	{
		arr[0] = 1;
	}
	j = 0;
	for (i = 9 - b; i<9; i++)
	{
		arr0[j] = arr[i];
		j++;
	}
	for (i = 0; i < 9 - b; i++)
	{
		arr0[j] = arr[i];
		j++;
	}
	for (j = 0; j < 9; j++)
	{
		printf("%d", arr0[j]);
	}
	printf("\n");
}
void change1(int a, int b)//带进位循环右移
{
	int arr[9] = { 0 };
	int arr0[9] = { 0 };
	int i = 8;
	int j = 0;
	while (1)
	{
		if (a < 0)
		{
			a = -a;
			j = 1;
		}
		arr[i] = a % 2;
		i = i - 1;
		a = a / 2;
		if (a == 0)
		{
			break;
		}
		else if (a < 2)
		{
			arr[i] = 1;
			break;
		}
	}
	if (j == 1)
	{
		arr0[0] = 1;
	}
	j = 1;

	for (i = 9 - b; i<9; i++)
	{
		arr0[j] = arr[i];
		j++;
	}
	for (i = 1; i < 9 - b; i++)
	{
		arr0[j] = arr[i];
		j++;
	}
	for (j = 0; j < 9; j++)
	{
		printf("%d", arr0[j]);
	}
	printf("\n");
}
void change2(int a, int b)
{
	int arr[9] = { 0 };
	int arr0[9] = { 0 };
	int i = 8;
	int j = 0;
	while (1)
	{
		if (a < 0)
		{
			a = -a;
			j = 1;
		}
		arr[i] = a % 2;
		i = i - 1;
		a = a / 2;
		if (a == 0)
		{
			break;
		}
		else if (a < 2)
		{
			arr[i] = 1;
			break;
		}
	}
	if (j == 1)
	{
		arr0[0] = 1;
	}

	j = 1;
	for (i = b + 1; i < 9; i++)
	{
		arr0[j] = arr[i];
		j++;
	}
	for (i = 1; i<b + 1; i++)
	{
		arr0[j] = arr[i];
		j++;
	}
	for (j = 0; j < 9; j++)
	{
		printf("%d", arr0[j]);
	}
	printf("\n");
}
int multiply(int a, int b)
{
	int i = 0;
	int j = 0;
	if (a < 0)
	{
		a = add(~a, 1);
		i = 1;
	}
	if (b < 0)
	{
		b = add(~b, 1);
		j = 1;
	}
	int ans = 0;
	while (b)
	{
		if (b & 1)
			ans = add(ans, a);
		a = a << 1;
		b = b >> 1;
	}
	if (i^j)
		ans = add(~ans, 1);
	return ans;
}
int division(int a, int b)
{
	int i = 0;
	int j = 0;
	if (a < 0)
	{
		a = add(~a, 1);
		i = 1;
	}
	if (b < 0)
	{
		b = add(~b, 1);
		j = 1;
	}
	int res = 0;
	while (a >= b)
	{
		res = add(res, 1);
		a = reduce(a, b);
	}
	if (i^j)
		res = add(~res, 1);
	return res;
}
int main()
{
	int op = 0;
	int a = -1;
	int b = 1;
	int f = 0;
	int p = 1;
	int CN = 0;
	int FC = 0;
	while (p)
	{
		printf("输入操作类型:");
		scanf("%d", &op);
		switch (op)
		{
		case 0000:
			printf("请输入第一个值:");
			scanf("%d", &a);
			printf("二进制序列为:");
			change(a);
			break;
		case 0001:
			printf("请输入第二个值:");
			scanf("%d", &b);
			printf("二进制序列为:");
			change(b);
			break;
		case 10:
			printf("输出AB相与\n");
			f = a&b;
			change(f);
			break;
		case 11:
			printf("ab相或\n");
			f = a | b;
			change(f);
			break;
		case 100:
			printf("对a取反\n");
			f = ~a;
			change(f);
			break;
		case 101:
			printf("对a不带进位循环右移b（取低3位）位\n");
			change0(a, b);
			break;
		case 110:
			printf("输入CN的值\n");
			printf("0.a逻辑右移一位\n");
			printf("1.a带进位循环右移一位\n");
			scanf("%d", &CN);
			if (CN)
				change1(a, 1);
			else
			{
				f = a >> 1;
				change(f);
			}
			break;
		case 111:
			printf("输入CN的值\n");
			printf("0.a逻辑左移一位\n");
			printf("1.a带进位循环左移一位\n");
			scanf("%d", &CN);
			if (CN)
				change2(a, 1);
			else
			{
				f = a << 1;
				change(f);
			}
			break;
		case 1000:
			printf("输入FC的值");
			scanf("%d", FC);
			break;
		case 1001:
			printf("a+b的值\n");
			add(a, b);
			break;
		case 1010:
			printf("a-b的值\n");
			change(reduce(a, b));
			break;
		case 1011:
			printf("a*b的值\n");
			change(multiply(a, b));
			break;
		case 1100:
			printf("a/b的值\n");
			change(division(a, b));
			break;
		case 1111:
			printf("退出程序\n");
			p = 0;
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}
	system("pause");
	return 0;
}
