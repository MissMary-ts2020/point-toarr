#include <stdio.h>
void print1(int arr[3][5], int x, int y) {
	int i = 0, j = 0;//二维数组的首元素是第一行这个数组
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			printf("%d, ", arr[i][j]);
		}
		printf("\n");
	}

}

void print2(int(*arr)[5], int x, int y) {//这个指针指向的是一个数组
	int i = 0, j = 0;//指针所指的数据类型为int[5]，指针类型为int*[5]
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {//*(p+i)<==>p[i]
			printf("%d, ", *(*(arr + i) + j));//*(arr+i)得到的是第i个数组的数组名，也就是首元素地址

		}
		printf("\n");
	}
}

int main(void) {

	
	//数组指针 - 指向数组的指针
	int arr[5] = { 1,2,3,4,5 };

	//arr - 首元素地址
	//&arr[0] - 等价于arr
	//&arr - 数组的地址
	int(*p)[5] = &arr;//数组指针的存储法
	int* p2[5];//这是指针数组
	//数组指针指向整个数组对象

	char* ch[5];
	char*(*pa)[5] = &arr;//正确的指针数组的指针的写法

	int ints[10] = { 1,4,5,6,8,234,453,3,43,1 };
	int(*paa)[10] = &ints;
	int i = 0;
	for (; i < 10; i++) {
		printf("%d\n", (*paa)[i]);
	}

	int arr2d[3][5] = { {1,2,3,4,5},{3,4,5,6,7},{4,6,7,9,0} };
	print1(arr2d, 3, 5);//arr - 数组名，指的是首元素的地址
	print2(arr2d, 3, 5);
	return 0;
}
