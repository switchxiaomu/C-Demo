#include<stdio.h>
#include <stdlib.h>

typedef int(*Calc)(int a, int b);

/// <summary>
/// ¼Ó·¨
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
int Add(int a, int b) {
	int result = a + b;
	return result;
}

/// <summary>
/// ¼õ·¨
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <returns></returns>
int Sub(int a, int b) {
	int result = a - b;
	return result;
}

int main() {
	int x = 100;
	int y = 200;
	int z = 0;

	Calc funcPoint1 = &Add;
	Calc funcPoint2 = &Sub;

	int w = funcPoint1(x, y);
	printf("%d+%d=%d\n", x, y, w);

	z = Add(x, y);
	printf("%d+%d=%d\n", x, y, z);
	
	z = Sub(x, y);
	printf("%d-%d=%d\n", x, y, z);

	system("pause");
	return 0;
	
}