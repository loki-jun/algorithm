#include <cmath>
#include "interation.h"
using namespace std;

double cl_root(double a, double eps)
{
    double xi = a / 2.0; //��ʼֵ��a��һ�룬�ܶ��˵�ѡ��
    double xt;
    int count = 0;
	int LOOP_LIMIT = 1000;
    do
    {
        xt = xi;
        xi = (xt + (a / xt)) / 2.0;
        count++; //���ڼ���Ƿ������ļ�����
        if (count >= LOOP_LIMIT)
        {
            return 0.0; //������������ʧ�� 
        }
    } while (fabs(xi - xt) > eps);
	
    return xi;
}

