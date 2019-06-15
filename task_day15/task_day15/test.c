#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//struct Test 
//{	int Num;  
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
int main()
{
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a)); //16
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a + 1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//16  4
	//printf("%d\n", sizeof(*&a));//4   16
	//printf("%d\n", sizeof(&a + 1));//16  4
	//printf("%d\n", sizeof(&a[0])); //4
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr)); //6
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr)); //4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr));//x
	//printf("%d\n", strlen(arr + 0));//x
	////printf("%d\n", strlen(*arr)); 
	////printf("%d\n", strlen(arr[1]));
	////printf("%d\n", strlen(&arr)); //char(*)[6]数组指针
	////printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));//x-1
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr + 0));//4
	//printf("%d\n", sizeof(*arr)); //1
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr)); //4
	//printf("%d\n", sizeof(&arr + 1));//4
	//printf("%d\n", sizeof(&arr[0] + 1));//4

	//printf("%d\n", strlen(arr)); //6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr)); 
	////printf("%d\n", strlen(arr[1]));
	////printf("%d\n", strlen(&arr)); 
	////printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));//5
	//char *p = "abcdef";
	//printf("%d\n", sizeof(p)); //4
	//printf("%d\n", sizeof(p + 1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p + 1));//4
	//printf("%d\n", sizeof(&p[0] + 1));//4

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p)); 
	////printf("%d\n", strlen(p[0]));
	////printf("%d\n", strlen(&p));
	////printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));//5
	//int a[3][4] = { 0 }; 
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//4  16
	//printf("%d\n", sizeof(a[0] + 1));//4
	//printf("%d\n", sizeof(*(a[0] + 1)));//4
	//printf("%d\n", sizeof(a + 1)); //4
	//printf("%d\n", sizeof(*(a + 1)));//16 
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n", sizeof(*(&a[0] + 1))); //16  
 //	printf("%d\n", sizeof(*a));//16
	//printf("%d\n", sizeof(a[3]));//16 
	//int a[5] = { 1, 2, 3, 4, 5 };   
	//int *ptr = (int *)(&a + 1);     
	//printf("%d,%d", *(a + 1), *(ptr - 1));//2, 5
	//p = 0x100000;
	//printf("%p\n", p + 0x1);  //100014
	//printf("%p\n", (unsigned long)p + 0x1);//100004   100001
	//printf("%p\n", (unsigned int*)p + 0x1);//100004
	//printf("%d\n", sizeof(long));
	//int a[4] = { 1, 2, 3, 4 };    
	//int *ptr1 = (int *)(&a + 1);     
	//int *ptr2 = (int *)((int)a + 1); 
	//printf("%x,%x", ptr1[-1], *ptr2);//4  ,20 00 00 00
	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };     
	//int *p;     
	//p = a[0];   
	//printf("%d", p[0]); // 1
	//int a[5][5];
	//int(*p)[4]; 
	//p = a;    
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//T *a, *b;
 //                                                               //	a - b = (a与b值的算术差值) / sizeof(T);
	//int arr[5] = { 0, 1, 1, 2, 3 };
	//printf("%d",&arr[0] - &arr[1]);
	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	//int *ptr1 = (int *)(&aa + 1); 
	//int *ptr2 = (int *)(*(aa + 1));
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//  10,5
	//char *a[] = { "work", "at", "alibaba" };  
	//char**pa = a; 
	//pa++;
	//printf("%s\n", *pa);//at
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };  
	char**cp[] = { c + 3, c + 2, c + 1, c }; 
	char***cpp = cp;  
	printf("%s\n", **++cpp);  
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3); 
	printf("%s\n", cpp[-1][-1] + 1);
	system("pause");
	return 0;
}