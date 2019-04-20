#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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
//int main()
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
//		}	if (i = 1)
//			printf("没有最大公约数\n");
//	}	
//	system("pause"); 
//	return 0;
//}