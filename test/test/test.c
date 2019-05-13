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
//给定两个整形变量的值，将两个值的内容进行交换。
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
//不允许创建临时变量，交换两个数的内容
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
//求10 个整数中最大值
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
//	printf("最大值是%d\n", MAX); 
//	system("pause");
//	return 0;
//}
//将三个数按从大到小输出
//int main()//（冒泡排序法）
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
//求两个数的最大公约数
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
//			printf("最大公约数为%d\n", i);
//			break;
//		}	
//	}	
//	system("pause"); 
//	return 0;
//}
//求两个数的最大公约数(欧几里得定理及辗转相处法)
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
//	printf("最大公约数是%d\n", h);
//	system("pause");
//	return 0;
//}
//将数组a中的内容和数组b中的内容进行交换。
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
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
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
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
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
//	printf("总次数%d\n", j);
//	system("pause");
//	return 0;
//}
//(二分查找)
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
//			printf("找到了,下标是:%d\n",h );
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到\n");
//	}
//	system("pause");
//	return 0;
//}
//(在屏幕上输出菱形图案)
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
//（求出0～999之间的所有“水仙花数”并输出）
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
//（求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字）
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
//(二分查找）复习
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
//			printf("找到了,小标是%d\n",i);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有\n");
//	}
//	system("pause");
//	return 0;
//}
//冒泡排序（复习）
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
//(快速排序)(第一次排序）
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
//(插入排序)
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
//(猜数字游戏)
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
//		printf("请输入");
//		scanf("%d", &b);
//		if (b > a)
//			printf("你猜大了\n");
//		else if (b < a)
//			printf("你猜小了\n");
//		else 
//		{
//			printf("恭喜你\n");
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
//		printf("请选择\n");
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
//（二分查找）（作业）
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
//			printf("找到了，下标是%d\n", b);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("没有\n");
//	}
//	system("pause");
//	return 0;
//}
//（模拟登陆窗口）
//int main()
//{
//	char arr1[] = { "abcdef" };
//	int i = 0;
//	i = 1;
//	while (i<=3)
//	{
//		printf("请输入密码");
//		char arr2[20];
//		scanf("%s", arr2);
//		int a = strcmp(arr1, arr2);
//		if (a != 0)
//			printf("第%d次输入错误,请重新输入\n",i );
//		else
//		{
//			printf("输入正确，登陆成功\n");
//			break;
//		}
//		i++;
//		if (i == 4)
//			printf("退出程序\n");
//	}
//	system("pause");
//	return 0;
//}
/*(编写一个程序，可以一直接收键盘字符， 
如果是小写字符就输出对应的大写字符，
如果接收的是大写字符，就输出对应的小写字符，
如果是数字不输出。
)*/
//int main()
//{
//	int ch = 0;
//	printf("输入字符\n");
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
//冒泡排序（复习）
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
//（运算器）
//int add(int a,int b)//加法
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
//int reduce(int a,int b)//减法
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
//void change0(int a,int b)//不带进位右移
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
//void change1(int a, int b)//带进位循环右移
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
//		printf("输入操作类型:");
//		scanf("%d", &op);
//		switch (op)
//		{
//		case 0000:
//			printf("请输入第一个值:");
//			scanf("%d", &a);
//			printf("\n");
//			printf("二进制序列为:");
//			change(a);
//			break;
//		case 0001:
//			printf("请输入第二个值:");
//			scanf("%d", &b);
//			printf("\n");
//			printf("二进制序列为:");
//			change(b);
//			break;
//		case 10:
//			printf("输出AB相与\n");
//			f = a&b;
//			change(f);
//			break;
//		case 11:
//			printf("ab相或\n");
//			f = a | b;
//			change(f);
//			break;
//		case 100:
//			printf("对a取反\n");
//			f = ~a;
//			change(f);
//			break;
//		case 101:
//			printf("对a不带进位循环右移b（取低3位）位\n");
//			change0(a, b);
//			break;
//		case 110:
//			printf("输入CN的值\n");
//			printf("0.a逻辑右移一位\n");
//			printf("1.a带进位循环右移一位\n");
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
//			printf("输入CN的值\n");
//			printf("0.a逻辑左移一位\n");
//			printf("1.a带进位循环左移一位\n");
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
//			printf("输入FC的值");
//			scanf("%d", FC);
//			break;
//		case 1001:
//			printf("a+b的值\n");
//			add(a, b);
//			break;
//		case 1010:
//			printf("a-b的值\n");
//			change(reduce(a, b));
//			break;
//		case 1011:
//			printf("a*b的值\n");
//			change(multiply(a, b));
//			break;
//		case 1100:
//			printf("a/b的值\n");
//			change(division(a, b));
//			break;
//		case 1111:
//			printf("退出程序\n");
//			p = 0;
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int a = 0;//x的位数
//int b = 0;//y的位数
//void print(char Y[]) {//输出乘数数组
//	for (int i = 0; i < b + 1; ++i) {
//		if (i == 1) {
//			printf(".");
//		}
//		printf("%c", Y[i]);
//	}
//}
//void complement(char x[], int m, int n) {//根据已求得的原码数组求补码码
//	for (int i = n + 1; i < m + 1; ++i) {//取反码
//		if (x[i] == '1') {
//			x[i] = '0';
//		}
//		else {
//			x[i] = '1';
//		}
//	}
//	for (int j = m; j > n; --j) {//取补码
//		if (x[j] == '1') {
//			x[j] = '0';
//			continue;
//		}
//		x[j] = '1';
//		break;
//	}
//}
//void complement1(int num, char x[], int m) {//求被乘数和负的被乘数的补码
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
//	//求原码
//	for (int i = 2 + m; i > 2; --i) {
//		x[i] = num % 2 + '0';
//		num /= 2;
//	}
//	if (x[0] == '1') {
//		complement(x, m + 2, 2);//求补码
//	}
//	printf("%s\n", x);
//}
//
//void complement2(int num, char x[], int m) {//求乘数补码
//	if (num >= 0) {
//		x[0] = '0';
//	}
//	else {
//		x[0] = '1';
//		num = -num;
//
//	}
//	//求原码
//	for (int i = m; i > 0; --i) {
//		x[i] = num % 2 + '0';
//		num /= 2;
//	}
//	if (x[0] == '1') {
//		complement(x, m, 0);//求补码
//	}
//	print(x);
//	printf("\n");
//}
//void print2(char x[], int m) {//输出结果的原码形式
//	int xy = 0;
//	if (x[0] == '1') {
//		complement(x, m, 0);//求补码
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
//	printf("转换为10进制为:");
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
//void Add(char Z[], char X[]) {//补码数组相加
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
//	printf("%d补码为:", x);
//	complement1(x, X, a);
//	printf("%d补码为:", y);
//	complement2(y, Y, b);
//	printf("%d补码为:", -x);
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
//		if (i < b) {//Y[]与Z[]右移
//			printf("右移\n");
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
//	printf("x*y的补码为%s\n", XY);
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
//（实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定）
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
//	printf("输入年份");
//	scanf("%d", &year);
//	if (Leap_year(year) == 1)
//	{
//		printf("%d年是闰年\n", year);
//	}
//	else
//		printf("%d年不是闰年\n", year);
//	system("pause");
//	return 0;
//}
//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。

//int* init(int* arr,int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("输入arr[%d]的值", i);
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
//	printf("初始\n");
//	Printing(init(arr, sz),sz);
//	printf("逆置 ");
//	Printing(reverse(arr, left, right),sz);
//	printf("清空 ");
//	Printing(empty(arr, sz),sz);
//	system("pause");
//	return 0;
//}
//(实现一个函数，判断一个数是不是素数。) 
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
//		printf("%d是素数\n", a);
//	}
//	else
//		printf("%d不是素数\n", a);
//	system("pause");
//	return 0;
//}
//(快速排序（递归）)
//void swap(int* pa, int*pb)
//{
//	int temp = 0;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//void  Quick_sort(int* arr,int le,int r)
//{
//	int le0 = le;
//	int r0 = r;
//	int x = arr[le];
//	if (le >= r)
//	{
//		return ;
//	}
//	while (le < r)
//	{
//		while (le < r&&x <= arr[r])
//		{
//			r--;
//		}
//		if (x>arr[r])
//		{
//			swap(&arr[le], &arr[r]);
//			le++;
//		}
//		while (le < r&&x >= arr[le])
//		{
//			le++;
//		}
//		if (x < arr[le])
//		{
//			swap(&arr[le], &arr[r]);
//			r--;
//		}
//	}
//	Quick_sort(arr, le0, le - 1);
//	Quick_sort(arr, le + 1, r0);
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { -1, 1, 2, 3, 9, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	Quick_sort(arr, left, right);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}