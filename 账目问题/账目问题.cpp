// 账目问题.cpp : 定义控制台应用程序的入口点。
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
				printf("当小数点点错%d位时，未计算出结果\n", nTimes);
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
			printf("当小数点点错%d位时，实际收入为%0.2f\n", nTimes, dRIn);
			bFound = true;
		}
		dWIn += 0.01;
		bFirst = false;
	}
	printf("计算结束\n");

    return 0;
}

