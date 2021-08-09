#include <stdio.h>
int main()
{
	int a = 5;
	int* p = &a;
	printf("%d\n", *p);
	printf("%d\n", a);
	printf("%p\n", p);
	printf("%p\n", &a);

	int b[5] = { 0, 2, 4, 6, 8 };
	int(*p1)[5] = b;//数组名之前未加&，会出警告，但不影响运行  
	//等价于int (*p1)[5] = &b,此处&只是地址的标志，并不表示取地址，因为b本身就是地址
	printf("%d\n", *(*p1));
	printf("%d\n", *b);
	printf("%d\n", *(*p1 + 1));
	printf("%d\n", *(b + 1));
	//p1是数组指针，即指向数组的指针；*p1表示取p1内容，即所指的数组（数组（首）地址）；*(*p1)等价于*b，表示取数组第一个元素，*(*p1+1)表示取数组第二个元素
	printf("%p\n", *p1);
	printf("%p\n", p1);
	printf("%p\n", b);
	//*p1,p1,b,打印结果均为同一地址

	return 0;
}
