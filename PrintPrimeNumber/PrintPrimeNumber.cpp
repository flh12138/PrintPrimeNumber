// PrintPrimeNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
//#include"stdlib.h"
//#include"stdafx.h"

using namespace std;

//判断输入的数字是否为素数
//返回值0：非素数
//返回值1：素数
int checkPrimeNumber(int n) {

	int a = 0;//用于计算输入数字可以被整除的数字的个数
	for (int i = 2; i < n - 1; i++) {
		if ((n%i) == 0) {
			a++;
		}
		else {
			a = a;
		}
	}
	if (a == 0) {

		return 1;
	}
	else {
		return 0;

	}
}

int main()
{
	int Number = 100;
	for (int k = 2; k < Number; k++) {

		//判断数字
		int ans = checkPrimeNumber(k);
		if (ans == 1) {
			cout << "the number is:" << k << endl;
		}
	}
	system("pause");
    
	return 0;
}


