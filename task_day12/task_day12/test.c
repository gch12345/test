#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//unsigned int reverse_bit(unsigned int value)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if (value & 1)
//		{
//			sum = sum + (int)pow(2, i);
//		}
//		value = value >> 1;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	unsigned int k = 0;
//	scanf("%d", &a);
//	k = reverse_bit(a);
//	printf("%u\n",k);
//	system("pause");
//	return 0;
//}

//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	double ave = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		ave = (a - b) / 2.0 + a;
//	}
//	else
//	{
//		ave = (b - a) / 2.0 + b;
//	}
//	printf("%lf", ave);
//	system("pause");
//	return 0;
//}

//���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//int main()
//{
//	int arr[] = { 1, 3, 2, 5, 5, 3, 2, 7, 1, 9 };
//	int x = 0;
//	int y = 0;
//	int a = 0;
//	int i = 0;
//	int k = 0;
//	int count = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz ; i++)
//	{
//		a = arr[i] ^ arr[i + 1];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		count = a & 1;
//		a = a >> 1;
//		k = i;
//		if (count)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> (k + 1))&1 )== 1)
//			x = arr[i] ^ x;
//		else
//			y = arr[i] ^ y;
//	}
//
//	printf("%d\n", x);
//	printf("%d\n", y);
//	system("pause");
//	return 0;
//}

//��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
int my_sizeof(char*arr)
{
	int count = 0;
	while (arr[count] != '\0')
	{
		count++;
	}
	return count;
}
void my_strcpy(char* arr,char* arr0,int k)
{
	int i = 0;
	int count = 0;
	while (1)
	{
		int n = i;
		int j = 0;
		int h = count;
		while (arr[i] != ' '&&arr[i] != '\0')
		{
			count++;
			i++;
		}
		for (j = k - count; j < k - h; j++)
		{
			arr0[j] = arr[n];
			n++;
		}
		if (arr[i] == '\0')
		{
			break;
		}
		arr0[k - count - 1] = ' ';
		i++;
		count++;
	}
}
int main()
{
	char arr[] = { "student a am i" };
	char arr0[20] = { 0 };
	int m = 0;
	m = my_sizeof(arr);
	my_strcpy(arr, arr0, m);
	int i = 0;
	printf("%s\n", arr);
	printf("%s\n", arr0);
	system("pause");
	return 0;
}