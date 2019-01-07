#include <iostream>
#include "subsetsum.h"

using namespace std;

int main()
{
    std::vector<int> vecSrc = GenerateVec();
    cout<<"{";
    for (auto it : vecSrc)
    {
        cout<<it<<" ";
    }
    cout<<"}"<<endl;

    int nSum = FindSubSetSum(vecSrc);
    cout<<"sum is "<<nSum<<endl;
    return 0;
}
