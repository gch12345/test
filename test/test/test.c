#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	int i = 0, n = 0;
//for (i = 100; i < 200; i++)
//{
//	int t = 0;
//	for (n = 2; n < i; n++)
//	{
//		if (i%n == 0){
//			t = 1;
//			break;
//		}
//	}
//	if(t == 0) printf("%d\t", i); 
//		
//}
//	system("pause");
//return 0;
//}
//int main()
//{
//	int i = 0, k = 0, h = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (k = 1; k <= i; k++)
//		{
//			h = i*k;
//			printf("%d*%d=%-2d ",k, i ,h);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main(){
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 !=0)) ||( i % 400 == 0))
//			printf("%d\t", i);
//	}
//	return 0;
//}
//�����������α�����ֵ��������ֵ�����ݽ��н�����
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d",&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	c = a; a = b; b = c;
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//����������ʱ����������������������
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//��10 �����������ֵ
//int main()
//{
//	int a[10] = { 0 }, b = 0, i = 0, j = 0;
//	int MAX = a[0];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &b);
//			a[i] = b;
//	}
//	for (j = 1; j<10; j++)
//	{
//		if (a[0]>a[j])
//			MAX = a[0];
//			else MAX = a[j];
//	}
//	printf("���ֵ��%d\n", MAX); 
//	system("pause");
//	return 0;
//}
//�����������Ӵ�С���
//int main()//��ð�����򷨣�
//{
//	int a[3] = { 0 }, i = 0,j = 0, b = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for (j = 0; j < 3; j++)
//	{
//		for (i = 0; i<2 - j; i++){
//			if (a[i + 1]>a[i])
//			{
//				b = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = b;
//			}
//		}
//	}
//	for (i = 0; i < 3;i++)
//	printf("%d ", a[i]);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//�������������Լ��
//int main()
//{
//	int a = 0, b = 0,c = 0,d = 0,i = 0 ;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		c = b,d = a;
//	else c = a,d = b;
//	for (i = c; i >= 1; i--)
//	{
//		if (d%i == 0 && c%i == 0){
//			printf("���Լ��Ϊ%d\n", i);
//			break;
//		}	
//	}	
//	system("pause"); 
//	return 0;
//}
//�������������Լ��(ŷ����ö���շת�ദ��)
//int main()
//{
//	int m = 0, n = 0, k = 0, h = 0;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//		k = m,h = n;
//	else k = n,h = m;
//	while (k > 0)
//	{
//		int t = 0;
//		t = h;
//		h = k;
//		k = t%k;
//	}
//	printf("���Լ����%d\n", h);
//	system("pause");
//	return 0;
//}
//������a�е����ݺ�����b�е����ݽ��н�����
//int main()
//{
//	int a[5] = { 0 }, b[5] = { 0 }, i = 0,k = 0;
//		printf("a[5]");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &a[i]);
//		printf("b[5]");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &b[i]);
//	for (i = 0; i < 5; i++)
//	{
//		k = a[i];
//		a[i] = b[i];
//		b[i] = k;
//	}
//		printf("a[5]");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//		printf("\n");
//		printf("b[5]");
//	for (i = 0; i < 5; i++)
//		printf("%d ", b[i]);
//	system("pause");
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
//int main()
//{
//	float sum = 0.0; int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%2==0)
//			i = -i;
//		sum = sum + 1.0/i;
//		if (i % 2 == 0)
//			i = -i;
//	}
//	printf("%f", sum);
//	system("pause");
//	return 0;
//}
//��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			j++;
//		if (i / 10 == 9)
//			j++;
//	}
//	printf("�ܴ���%d\n", j);
//	system("pause");
//	return 0;
//}
//(���ֲ���)
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, left = 0, right = 0, k = 99;
//	right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int h = left + (right-left) / 2;
//		if (arr[h] < k)
//		{
//			left = h + 1;
//		}
//		else if (arr[h]>k)
//		{
//			right = h - 1;
//		}
//		else{
//			printf("�ҵ���,�±���:%d\n",h );
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�\n");
//	}
//	system("pause");
//	return 0;
//}
//(����Ļ���������ͼ��)
//int main()
//{
//	char arr1[] = "                         ";
//	char arr2[] = "*************************";
//	char arr3[] = "                         ";
//	int i = strlen(arr1) / 2;
//	int left = i;
//	int right = i;
//	while (left >= 0)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		left--;
//		right++;
//	}
//	left++;
//	right--;
//	while (left != right)
//	{
//		arr1[left] = arr3[left];
//		arr1[right] = arr3[right];
//		printf("%s\n", arr1);
//		left++;
//		right--;
//	}
//
//	system("pause");
//	return 0;
//}
//�����0��999֮������С�ˮ�ɻ������������
//int main()
//{
//	int i=0, arr[3] = { 0 };
//	for (i = 0; i < 999; i++)
//	{
//		arr[0] = i / 100;
//		arr[1] = i % 100 / 10;
//		arr[2] = i % 10;
//		if (pow(arr[0], 3) + pow(arr[1], 3) + pow(arr[2], 3) == i)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//����Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//int main()
//{
//	int i = 0, k = 0, sum = 0, sum1 = 0;
//  scanf("%d", &k);
//	for (i = 0; i < 5; i++)
//	{
//		sum = sum * 10 + k;
//		sum1 = sum1 + sum;
//	}
//	printf("%d\n", sum1);
//	system("pause");
//	return 0;
//}
//(���ֲ��ң���ϰ
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int j = 5;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1 ;
//	while (left <= right)
//	{
//		i = (right - left) / 2 + left;
//		if (j > arr[i])
//		{
//			left = i + 1;
//		}
//		else if (j < arr[i])
//		{
//			right = i - 1;
//		}
//		if (j == arr[i])
//		{
//			printf("�ҵ���,С����%d\n",i);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û��\n");
//	}
//	system("pause");
//	return 0;
//}
//ð�����򣨸�ϰ��
//int main()
//{
//	int arr[5] = { 1, 99, 2, 3, 5 };
//	int i = 0;
//	int t = 0;
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		for (i = 0; i < 4-j; i++)
//		{
//			if (arr[i]>arr[i + 1])
//			{
//				t = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//(��������)(��һ������
//int main()
//{
//	int arr[10] = { 5, 8, 9, 7, 4, 3, 2, 1, 10, 6, };
//	int k = arr[0];
//	int i = 0;
//	int t = 0;
//	int left = 1;
//	int right = 9;
//	while ()
//	while(left <= right)
//	{
//		if (arr[left] > k)
//		{
//			for (i = 0; i < 10; i++)
//			{
//				if (arr[i] == k)
//					break;
//			}
//			t = arr[i];
//			arr[i] = arr[left];
//			arr[left] = t;
//		}
//		if (arr[right] < k)
//		{
//			for (i = 0; i < 10; i++)
//			{
//				if (arr[i] == k)
//					break;
//			}
//			t = arr[i];
//			arr[i] = arr[right];
//			arr[right] = t;
//		}
//		left++;
//		right--;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//(��������)
//int main()
//{
//	int arr[5] = { 5, 1, 3, 2, 4 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int h = 0;
//	int n = 0;
//	for (i = 1; i < 5; i++)
//	{
//		for (k = i - 1; k >= 0; k--)
//		{
//			h = arr[i];
//			if (arr[k] < arr[i])
//			{
//				break;
//			}
//		}
//		if (k!=i-1)
//		{
//			for (n = i -1; n > k; n--)
//			{
//				arr[n + 1] = arr[n];
//			}
//			arr[k+1] = h;
//		}
//
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", i);
//	system("pause");
//	return 0;
//}
//(��������Ϸ)
//void menu()
//{
//	printf("*******************\n");
//	printf("***** 1.play ******\n");
//	printf("***** 0.exit ******\n");
//	printf("*******************\n");
//}
//void game()
//{
//	int a = rand()%100+1;
//	int b = 0;
//	while (1)
//	{
//		printf("������");
//		scanf("%d", &b);
//		if (b > a)
//			printf("��´���\n");
//		else if (b < a)
//			printf("���С��\n");
//		else 
//		{
//			printf("��ϲ��\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int c = 0;
//	srand((unsigned int)time(0));
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &c);
//		switch (c)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			break;
//		}
//	}
//	while (c);
//	system("pause");
//	return 0;
//}
//�����ֲ��ң�����ҵ��
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = 0;
//	right = sizeof(arr) / sizeof(arr[0])-1;
//	int a = 0;
//	scanf("%d", &a);
//	while (left <= right)
//	{
//		int b = (right - left) / 2 + left;
//		if (arr[b] > a)
//		{
//			right = b-1;
//		}
//		else if (arr[b] < a)
//		{
//			left = b+1;
//		}
//		if(arr[b]==a)
//		{
//			printf("�ҵ��ˣ��±���%d\n", b);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("û��\n");
//	}
//	system("pause");
//	return 0;
//}
//��ģ���½���ڣ�
//int main()
//{
//	char arr1[] = { "abcdef" };
//	int i = 0;
//	i = 1;
//	while (i<=3)
//	{
//		printf("����������");
//		char arr2[20];
//		scanf("%s", arr2);
//		int a = strcmp(arr1, arr2);
//		if (a != 0)
//			printf("��%d���������,����������\n",i );
//		else
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		i++;
//		if (i == 4)
//			printf("�˳�����\n");
//	}
//	system("pause");
//	return 0;
//}
/*(��дһ�����򣬿���һֱ���ռ����ַ��� 
�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
��������ֲ������
)*/
//int main()
//{
//	int ch = 0;
//	printf("�����ַ�\n");
//	while (1)
//	{
//		scanf("%c", &ch);
//		if (ch >= 'a'&&ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		if (ch >= 'A'&&ch <= 'Z')
//		{
//			printf("%c\n",ch+32);
//		}
//	}
//	system("pause");
//	return 0;
//}
//ð�����򣨸�ϰ��
//int main()
//{
//	int arr[5] = { 5, 0, 99, 1, 4 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j<4 - i;j++)
//		if (arr[j]>arr[j + 1])
//		{
//			t = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = t;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
//����������
//int add(int a,int b)//�ӷ�
//{
//	int re = a;
//	while (b)
//	{
//		int tmp = a;
//		a = a^b;
//		b = (tmp&b) << 1;
//		re = a;
//	}
//	return re;
//}
//int reduce(int a,int b)//����
//{
//	b = add(~b, 1);
//	return add(a, b);
//}
//void change(int a)
//{
//	int arr[9] = { 0 };
//	int i = 8;
//	int j = 0;
//	while (1)
//	{
//		if (a < 0)
//		{
//			a = -a;
//			j = 1;
//		}
//		arr[i] = a % 2;
//		i = i - 1;
//		a = a / 2;
//		if (a == 0)
//		{
//			break;
//		}
//		else if (a < 2)
//		{
//			arr[i] = 1;
//			break;
//		}
//	}
//	if (j == 1)
//	{
//		arr[0] = 1;
//	}
//	for (i = 0; i < 9;i++)
//	{	
//		printf("%d", arr[i]);
//	}
//
//	printf("\n");
//
//}
//void change0(int a,int b)//������λ����
//{
//	int arr[9] = { 0 };
//	int arr0[9] = { 0 };
//	int i = 8;
//	int j = 0;
//	while (1)
//	{
//		if (a < 0)
//		{
//			a = -a;
//			j = 1;
//		}
//		arr[i] = a % 2;
//		i = i - 1;
//		a = a / 2;
//		if (a == 0)
//		{
//			break;
//		}
//		else if (a < 2)
//		{
//			arr[i] = 1;
//			break;
//		}
//	}
//	if (j == 1)
//	{
//		arr[0] = 1;
//	}
//	j = 0;
//	for (i = 9-b; i<9; i++)
//	{
//		arr0[j] = arr[i];
//		j++;
//	}
//	for (i = 0; i < 9 - b; i++)
//	{
//		arr0[j] = arr[i];
//		j++;
//	}
//	for (j = 0; j < 9; j++)
//	{
//		printf("%d", arr0[j]);
//	}
//	printf("\n");
//}
//void change1(int a, int b)//����λѭ������
//{
//	int arr[9] = { 0 };
//	int arr0[9] = { 0 };
//	int i = 8;
//	int j = 0;
//	while (1)
//	{
//		if (a < 0)
//		{
//			a = -a;
//			j = 1;
//		}
//		arr[i] = a % 2;
//		i = i - 1;
//		a = a / 2;
//		if (a == 0)
//		{
//			break;
//		}
//		else if (a < 2)
//		{
//			arr[i] = 1;
//			break;
//		}
//	}
//	if (j == 1)
//	{
//		arr0[0] = 1;
//	}
//	j = 1;
//	
//	for (i = 9 - b; i<9; i++)
//	{
//		arr0[j] = arr[i];
//		j++;
//	}
//	for (i = 1; i < 9 - b; i++)
//	{
//		arr0[j] = arr[i];
//		j++;
//	}
//	for (j = 0; j < 9; j++)
//	{
//		printf("%d", arr0[j]);
//	}
//	printf("\n");
//}
//void change2(int a, int b)
//{
//	int arr[9] = { 0 };
//	int arr0[9] = { 0 };
//	int i = 8;
//	int j = 0;
//	while (1)
//	{
//		if (a < 0)
//		{
//			a = -a;
//			j = 1;
//		}
//		arr[i] = a % 2;
//		i = i - 1;
//		a = a / 2;
//		if (a == 0)
//		{
//			break;
//		}
//		else if (a < 2)
//		{
//			arr[i] = 1;
//			break;
//		}
//	}
//	if (j == 1)
//	{
//		arr0[0] = 1;
//	}
//
//	j = 1;
//	for (i = b+1; i < 9; i++)
//	{
//		arr0[j] = arr[i];
//		j++;
//	}
//	for (i = 1; i<b+1; i++)
//	{
//		arr0[j] = arr[i];
//		j++;
//	}
//	for (j = 0; j < 9; j++)
//	{
//		printf("%d", arr0[j]);
//	}
//	printf("\n");
//}
//int multiply(int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	if (a < 0)
//	{
//		a = add(~a, 1);
//		i = 1;
//	}
//	if (b < 0)
//	{
//		b = add(~b, 1);
//		j = 1;
//	}
//	int ans = 0;
//	while (b)
//	{
//		if (b & 1)
//		ans = add(ans, a);
//		a = a << 1;
//		b = b >> 1;
//	}
//	if (i^j)
//		ans=add(~ans, 1);
//	return ans;
//}
//int division(int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	if (a < 0)
//	{
//		a = add(~a, 1);
//		i = 1;
//	}
//	if (b < 0)
//	{
//		b = add(~b, 1);
//		j = 1;
//	}
//	int res = 0;
//	while (a >= b)
//	{
//		res = add(res, 1);
//		a = reduce(a, b);
//	}
//	if (i^j)
//		res = add(~res, 1);
//	return res;
//}
//int main()
//{
//	int op=0 ;
//	int a = -1;
//	int b = 1;
//	int f = 0;
//	int p = 1;
//	int CN = 0;
//	int FC = 0;	
//	while (p)
//	{
//		printf("�����������:");
//		scanf("%d", &op);
//		switch (op)
//		{
//		case 0000:
//			printf("�������һ��ֵ:");
//			scanf("%d", &a);
//			printf("\n");
//			printf("����������Ϊ:");
//			change(a);
//			break;
//		case 0001:
//			printf("������ڶ���ֵ:");
//			scanf("%d", &b);
//			printf("\n");
//			printf("����������Ϊ:");
//			change(b);
//			break;
//		case 10:
//			printf("���AB����\n");
//			f = a&b;
//			change(f);
//			break;
//		case 11:
//			printf("ab���\n");
//			f = a | b;
//			change(f);
//			break;
//		case 100:
//			printf("��aȡ��\n");
//			f = ~a;
//			change(f);
//			break;
//		case 101:
//			printf("��a������λѭ������b��ȡ��3λ��λ\n");
//			change0(a, b);
//			break;
//		case 110:
//			printf("����CN��ֵ\n");
//			printf("0.a�߼�����һλ\n");
//			printf("1.a����λѭ������һλ\n");
//			scanf("%d", &CN);
//			if (CN)
//				change1(a, 1);
//			else
//			{
//				f = a >> 1;
//				change(f);
//			}
//			break;
//		case 111:
//			printf("����CN��ֵ\n");
//			printf("0.a�߼�����һλ\n");
//			printf("1.a����λѭ������һλ\n");
//			scanf("%d", &CN);
//			if (CN)
//				change2(a, 1);
//			else
//			{
//				f = a << 1;
//				change(f);
//			}
//			break;
//		case 1000:
//			printf("����FC��ֵ");
//			scanf("%d", FC);
//			break;
//		case 1001:
//			printf("a+b��ֵ\n");
//			add(a, b);
//			break;
//		case 1010:
//			printf("a-b��ֵ\n");
//			change(reduce(a, b));
//			break;
//		case 1011:
//			printf("a*b��ֵ\n");
//			change(multiply(a, b));
//			break;
//		case 1100:
//			printf("a/b��ֵ\n");
//			change(division(a, b));
//			break;
//		case 1111:
//			printf("�˳�����\n");
//			p = 0;
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int a = 0;//x��λ��
//int b = 0;//y��λ��
//void print(char Y[]) {//�����������
//	for (int i = 0; i < b + 1; ++i) {
//		if (i == 1) {
//			printf(".");
//		}
//		printf("%c", Y[i]);
//	}
//}
//void complement(char x[], int m, int n) {//��������õ�ԭ������������
//	for (int i = n + 1; i < m + 1; ++i) {//ȡ����
//		if (x[i] == '1') {
//			x[i] = '0';
//		}
//		else {
//			x[i] = '1';
//		}
//	}
//	for (int j = m; j > n; --j) {//ȡ����
//		if (x[j] == '1') {
//			x[j] = '0';
//			continue;
//		}
//		x[j] = '1';
//		break;
//	}
//}
//void complement1(int num, char x[], int m) {//�󱻳����͸��ı������Ĳ���
//	if (num >= 0) {
//		x[0] = '0';
//		x[1] = '0';
//	}
//	else {
//		x[0] = '1';
//		x[1] = '1';
//		num = -num;
//
//	}
//	x[2] = '.';
//	//��ԭ��
//	for (int i = 2 + m; i > 2; --i) {
//		x[i] = num % 2 + '0';
//		num /= 2;
//	}
//	if (x[0] == '1') {
//		complement(x, m + 2, 2);//����
//	}
//	printf("%s\n", x);
//}
//
//void complement2(int num, char x[], int m) {//���������
//	if (num >= 0) {
//		x[0] = '0';
//	}
//	else {
//		x[0] = '1';
//		num = -num;
//
//	}
//	//��ԭ��
//	for (int i = m; i > 0; --i) {
//		x[i] = num % 2 + '0';
//		num /= 2;
//	}
//	if (x[0] == '1') {
//		complement(x, m, 0);//����
//	}
//	print(x);
//	printf("\n");
//}
//void print2(char x[], int m) {//��������ԭ����ʽ
//	int xy = 0;
//	if (x[0] == '1') {
//		complement(x, m, 0);//����
//		printf("-");
//	}
//	int i = 3;
//	while (x[i] == '0') {
//		++i;
//	}
//	int count = 0;
//	for (int j = i; j < m + 1; ++j) {
//		printf("%c", x[j]);
//	}
//	printf("\n");
//	printf("ת��Ϊ10����Ϊ:");
//	if (x[0] == '1') {
//		printf("-");
//	}
//	for (int j = i; j < m + 1; ++j) {
//		if (x[j] == '1') {
//			xy += (int)pow(2, m - j);
//		}
//	}
//	printf("%d\n", xy);
//}
//void Add(char Z[], char X[]) {//�����������
//	for (int i = a + 2; i >= 0; --i) {
//		if (i == 2) {
//			continue;
//		}
//		if (Z[i] + X[i] - '0' == '2') {
//			Z[i] = '0';
//			for (int j = i - 1; j >= 0; --j) {
//				if (Z[j] == '0') {
//					Z[j] = '1';
//					break;
//				}
//				else if (Z[j] == '1') {
//					Z[j] = '0';
//				}
//			}
//		}
//		else {
//			Z[i] = Z[i] + X[i] - '0';
//		}
//	}
//}
//void Booth(int x, int y) {//
//	char X[36] = { '\0' };
//	char Y[34] = { '\0' };
//	char _X[36] = { '\0' };
//	char Z[36] = { '\0' };
//	for (int i = 0; i < a + 3; ++i) {
//		if (i == 2) {
//			Z[i] = '.';
//			continue;
//		}
//		Z[i] = '0';
//	}
//	printf("%d����Ϊ:", x);
//	complement1(x, X, a);
//	printf("%d����Ϊ:", y);
//	complement2(y, Y, b);
//	printf("%d����Ϊ:", -x);
//	complement1(-x, _X, a);
//	char yb_1 = '0';
//	printf("\n");
//	for (int i = 0; i < b + 1; ++i) {
//		if (Y[b] == yb_1) {
//		}
//		else if (Y[b] < yb_1) {
//			Add(Z, X);
//			printf("                    +X\n%s\n", X);
//		}
//		else {
//			Add(Z, _X);
//			printf("                   +_X\n%s\n", _X);
//		}
//		printf("%s  ", Z);
//		print(Y);
//		printf("  %c\n", yb_1);
//		if (i < b) {//Y[]��Z[]����
//			printf("����\n");
//			yb_1 = Y[b];
//			for (int i = b; i > 0; --i) {
//				Y[i] = Y[i - 1];
//			}
//			Y[0] = Z[a + 2];
//			for (int i = a + 2; i > 0; --i) {
//				if (i == 3) {
//					Z[i] = Z[i - 2];
//					continue;
//				}
//				if (i == 2) {
//					continue;
//				}
//				Z[i] = Z[i - 1];
//			}
//			printf("%s  ", Z);
//			print(Y);
//			printf("  %c\n", yb_1);
//		}
//	}
//	char XY[70] = { '\0' };
//	strcpy(XY, Z);
//	for (int i = a + 3; i < a + 3 + b; ++i) {
//		XY[i] = Y[i - a - 3];
//	}
//	printf("x*y�Ĳ���Ϊ%s\n", XY);
//	print2(XY, a + b + 2);
//}
//void main() {
//	int x, y, n;
//	scanf("%d %d", &x, &y);
//	n = x;
//	while (n) {
//		++a;
//		n /= 2;
//	}
//	n = y;
//	while (n) {
//		++b;
//		n /= 2;
//	}
//	Booth(x, y);
//	system("pause");
//}
//��ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//void Pithy_formula(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Pithy_formula(i);
//	system("pause");
//	return 0;
//}
//void swap(int*pa,int*pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	system("pause");
//	return 0;
//}
//int Leap_year(int a)
//{
//	if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//	{
//		return 1;
//	}
//	 else return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("�������");
//	scanf("%d", &year);
//	if (Leap_year(year) == 1)
//	{
//		printf("%d��������\n", year);
//	}
//	else
//		printf("%d�겻������\n", year);
//	system("pause");
//	return 0;
//}
//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��

//int* init(int* arr,int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("����arr[%d]��ֵ", i);
//		scanf("%d", &arr[i]);
//	}
//	return arr;
//}
//int* empty(int *arr,int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		arr[i] = 0;
//	}
//	return arr;
//}
//int* reverse(int* arr,int le,int r)
//{
//	int a = r;
//	while (le < r)
//	{
//		int temp = 0;
//		temp = arr[le];
//		arr[le] = arr[r];
//		arr[r] = temp;
//		le++;
//		r--;
//	}
//	return arr;
//}
//void Printing(int *arr,int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("��ʼ\n");
//	Printing(init(arr, sz),sz);
//	printf("���� ");
//	Printing(reverse(arr, left, right),sz);
//	printf("��� ");
//	Printing(empty(arr, sz),sz);
//	system("pause");
//	return 0;
//}
//(ʵ��һ���������ж�һ�����ǲ���������) 
//int prime_number(int k)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(k); i++)
//	{
//		if (k%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if ((prime_number(a) == 1))
//	{
//		printf("%d������\n", a);
//	}
//	else
//		printf("%d��������\n", a);
//	system("pause");
//	return 0;
//}
//(�������򣨵ݹ飩)
void swap(int* pa, int*pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void  Quick_sort(int* arr,int le,int r)
{
	int le0 = le;
	int r0 = r;
	int x = arr[le];
	if (le >= r)
	{
		return ;
	}
	while (le < r)
	{
		while (le < r&&x <= arr[r])
		{
			r--;
		}
		if (x>arr[r])
		{
			swap(&arr[le], &arr[r]);
			le++;
		}
		while (le < r&&x >= arr[le])
		{
			le++;
		}
		if (x < arr[le])
		{
			swap(&arr[le], &arr[r]);
			r--;
		}
	}
	Quick_sort(arr, le0, le - 1);
	Quick_sort(arr, le + 1, r0);
}
int main()
{
	int i = 0;
	int arr[10] = { -1, 1, 2, 3, 9, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	Quick_sort(arr, left, right);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}