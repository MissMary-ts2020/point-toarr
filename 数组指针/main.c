#include <stdio.h>
void print1(int arr[3][5], int x, int y) {
	int i = 0, j = 0;//��ά�������Ԫ���ǵ�һ���������
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {
			printf("%d, ", arr[i][j]);
		}
		printf("\n");
	}

}

void print2(int(*arr)[5], int x, int y) {//���ָ��ָ�����һ������
	int i = 0, j = 0;//ָ����ָ����������Ϊint[5]��ָ������Ϊint*[5]
	for (i = 0; i < x; i++) {
		for (j = 0; j < y; j++) {//*(p+i)<==>p[i]
			printf("%d, ", *(*(arr + i) + j));//*(arr+i)�õ����ǵ�i���������������Ҳ������Ԫ�ص�ַ

		}
		printf("\n");
	}
}

int main(void) {

	
	//����ָ�� - ָ�������ָ��
	int arr[5] = { 1,2,3,4,5 };

	//arr - ��Ԫ�ص�ַ
	//&arr[0] - �ȼ���arr
	//&arr - ����ĵ�ַ
	int(*p)[5] = &arr;//����ָ��Ĵ洢��
	int* p2[5];//����ָ������
	//����ָ��ָ�������������

	char* ch[5];
	char*(*pa)[5] = &arr;//��ȷ��ָ�������ָ���д��

	int ints[10] = { 1,4,5,6,8,234,453,3,43,1 };
	int(*paa)[10] = &ints;
	int i = 0;
	for (; i < 10; i++) {
		printf("%d\n", (*paa)[i]);
	}

	int arr2d[3][5] = { {1,2,3,4,5},{3,4,5,6,7},{4,6,7,9,0} };
	print1(arr2d, 3, 5);//arr - ��������ָ������Ԫ�صĵ�ַ
	print2(arr2d, 3, 5);
	return 0;
}
