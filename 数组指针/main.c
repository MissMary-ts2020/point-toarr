#include <stdio.h>

int main(void) {

	
	//����ָ�� - ָ�������ָ��
	int arr[5] = { 1,2,3,4,5 };

	//arr - ��Ԫ�ص�ַ
	//&arr[0] - �ȼ���arr
	//&arr - ����ĵ�ַ
	int(* p)[5] = &arr;//����ָ��Ĵ洢��
	//����ָ��ָ�������������



	return 0;
}