#include "sort.h"
#include <iostream>
#include <cmath>
#include "interation.h"
#include "division.h"
using namespace std;

// void main(void)
// {
// 	//��������ַ�����abcd
// 	std::string cl = "abc";
// 	Permutation(cl, 0, cl.length()); //ԭʼ����Ĺ�ģ�Ǵ�0λ�ÿ�ʼ�������ַ���
// 	printf("length.%d\n",cl.length());
// 	_sleep(5*1000); //��ʱ5��
// }

// void main(void)
// {
// 	double a = cl_root(99.0,0.001);
// 	printf("sqrt value is %f",a);
// 	_sleep(5*1000); //��ʱ5��
// 	return;
// }

// void main(void)
// {
// 	int i = -10;
// 	unsigned int u = 5;
//     cout << i + u << endl;
// 	_sleep(5*1000); //��ʱ5��
// 	return;
// }

void main(void)
{
	double x;
	x = DichotomyEquation(-5,5,func);
	printf("The value is %f\n",x);
	_sleep(5*1000); //��ʱ5��
	return;
}
