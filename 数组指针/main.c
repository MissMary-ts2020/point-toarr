#include <stdio.h>

int main(void) {

	
	//数组指针 - 指向数组的指针
	int arr[5] = { 1,2,3,4,5 };

	//arr - 首元素地址
	//&arr[0] - 等价于arr
	//&arr - 数组的地址
	int(* p)[5] = &arr;//数组指针的存储法
	//数组指针指向整个数组对象



	return 0;
}