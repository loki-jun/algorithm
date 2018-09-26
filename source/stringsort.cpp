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

//���ַ���[begin, end]������Ӵ�ȫ����
void Permutation(std::string& chList, int begin, int end)
{
	if (begin == end)//��ʣһ���ַ��ˣ�����Ҫ�����ˣ�ֱ�������ǰ�Ľ��
	{
		std::cout << chList << std::endl;
		return;
	}

    for (int i = begin; i <= end; i++)
    {
        Swap(chList, begin, i); //�ѵ�i���ַ�����beginλ�ã���begin+1λ�ÿ����µ��Ӵ���ʼ
        Permutation(chList, begin + 1, end); //���������
        Swap(chList, begin, i); //����ѡ��һ���̶��ַ�֮ǰ����Ҫ������
    }
}


