#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
int add(int a, int b)//�ӷ�
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
int reduce(int a, int b)//����
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
void change0(int a, int b)//������λ����
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
void change1(int a, int b)//����λѭ������
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
		printf("�����������:");
		scanf("%d", &op);
		switch (op)
		{
		case 0000:
			printf("�������һ��ֵ:");
			scanf("%d", &a);
			printf("����������Ϊ:");
			change(a);
			break;
		case 0001:
			printf("������ڶ���ֵ:");
			scanf("%d", &b);
			printf("����������Ϊ:");
			change(b);
			break;
		case 10:
			printf("���AB����\n");
			f = a&b;
			change(f);
			break;
		case 11:
			printf("ab���\n");
			f = a | b;
			change(f);
			break;
		case 100:
			printf("��aȡ��\n");
			f = ~a;
			change(f);
			break;
		case 101:
			printf("��a������λѭ������b��ȡ��3λ��λ\n");
			change0(a, b);
			break;
		case 110:
			printf("����CN��ֵ\n");
			printf("0.a�߼�����һλ\n");
			printf("1.a����λѭ������һλ\n");
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
			printf("����CN��ֵ\n");
			printf("0.a�߼�����һλ\n");
			printf("1.a����λѭ������һλ\n");
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
			printf("����FC��ֵ");
			scanf("%d", FC);
			break;
		case 1001:
			printf("a+b��ֵ\n");
			add(a, b);
			break;
		case 1010:
			printf("a-b��ֵ\n");
			change(reduce(a, b));
			break;
		case 1011:
			printf("a*b��ֵ\n");
			change(multiply(a, b));
			break;
		case 1100:
			printf("a/b��ֵ\n");
			change(division(a, b));
			break;
		case 1111:
			printf("�˳�����\n");
			p = 0;
			break;
		default:
			printf("�������\n");
			break;
		}
	}
	system("pause");
	return 0;
}
