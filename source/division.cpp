#include <iostream>
const double PRECISION = 0.000000001;
typedef double (*FunctionPtr)(double);
double func(double x)
{
    return (2.0*x*x + 3.2*x - 1.8);
}

double DichotomyEquation(double a, double b, FunctionPtr f)
{
    double mid = (a + b) / 2.0;
    while((b - a) > PRECISION)
    {
        if(f(a) * f(mid) < 0.0) //Ӧ�õ������ƹ�ϵ
        {
            b = mid;
        }
        else
        {
            a = mid;
        }
        mid = (a + b) / 2.0; //���µ�������
		printf("Value is %f\n",mid);
    }	
    return mid;
}