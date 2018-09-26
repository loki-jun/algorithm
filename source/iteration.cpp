#include <cmath>
#include "interation.h"
using namespace std;

double cl_root(double a, double eps)
{
    double xi = a / 2.0; //初始值用a的一半，很多人的选择
    double xt;
    int count = 0;
	int LOOP_LIMIT = 1000;
    do
    {
        xt = xi;
        xi = (xt + (a / xt)) / 2.0;
        count++; //用于检查是否收敛的计数器
        if (count >= LOOP_LIMIT)
        {
            return 0.0; //不收敛，返回失败 
        }
    } while (fabs(xi - xt) > eps);
	
    return xi;
}

