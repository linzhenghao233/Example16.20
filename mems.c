/* mems.c -- ʹ��memcpy()��memmove() */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10
void show_array(const int ar[], int n);
//�����������֧��C11��_Static_assert,����ע�͵���������
//_Static_assert(sizeof(double) == 2 * sizeof(int), "double not twice int size");
int main(void) {
	int values[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int target[SIZE];
	double curious[SIZE / 2] = { 2.0, 2.0e5, 2.0e10, 2.0e20, 5.0e30 };
}