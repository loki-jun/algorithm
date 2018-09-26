#include "sort.h"
#include <iostream>

void Swap(std::string& chList, int pos1, int pos2)
{
    if (pos1 != pos2)
    {
        auto tmp = chList[pos1]; 
        chList[pos1] = chList[pos2];
        chList[pos2] = tmp;
    }
}

//将字符串[begin, end]区间的子串全排列
void Permutation(std::string& chList, int begin, int end)
{
	if (begin == end)//就剩一个字符了，不需要排列了，直接输出当前的结果
	{
		std::cout << chList << std::endl;
		return;
	}

    for (int i = begin; i <= end; i++)
    {
        Swap(chList, begin, i); //把第i个字符换到begin位置，将begin+1位置看作新的子串开始
        Permutation(chList, begin + 1, end); //求解子问题
        Swap(chList, begin, i); //在挑选下一个固定字符之前，需要换回来
    }
}


