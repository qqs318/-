// ��Ŀ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "math.h"

int main()
{
	double dRIn = 0.;
	double dWIn = 0.01;
	int nTimes = 4;
	bool bFirst = true;
	bool bFound = false;
	while (nTimes<15)
	{
		dRIn = dWIn * pow(10.0, (double)nTimes);
		if ((dRIn - dWIn)>(153.01))
		{
			if (bFirst)
			{
				break;
			}
			if (!bFound)
			{
				printf("��С������%dλʱ��δ��������\n", nTimes);
			}
			nTimes++;
			dRIn = 0.;
			dWIn = 0.01;
			bFirst = true;
			bFound = false;
			continue;
		}
		if ((dRIn - dWIn - 153.) < 0.01 && (dRIn - dWIn-153.) > -0.01)
		{
			printf("��С������%dλʱ��ʵ������Ϊ%0.2f\n", nTimes, dRIn);
			bFound = true;
		}
		dWIn += 0.01;
		bFirst = false;
	}
	printf("�������\n");

    return 0;
}

