#include "subsetsum.h"
#include <stdlib.h>
#include <time.h>

std::vector<int> GenerateVec()
{
    srand((int)time(0));
    std::vector<int> vecRet;
    for (int i = 0; i < 10; i++)
    {
        vecRet.push_back(rand() % 50 * (rand() % 2 ? 1 : -1));
    }
    return vecRet;
}

int FindSubSetSum(std::vector<int> & vecSrc)
{
    int nSum = 0;
    int nRet = 0;
    for (auto it : vecSrc)
    {
        nSum += it;
        if (nSum < 0)
        {
            nSum = it;
        }
        if (nRet < nSum)
        {
            nRet = nSum;
        }
    }
    return nRet;
}
