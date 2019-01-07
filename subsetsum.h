#ifndef SUBSETSUM_H
#define SUBSETSUM_H
#include <vector>
//给定一个随机的数字序列，
//要求循环一次找出其中和最大的连续子集的和，
//比如{6,-2,-3,5,9,-8,6}，
//和最大的连续子集应该是6,-2,-3,5,9，和为15

std::vector<int> GenerateVec();
int FindSubSetSum(std::vector<int> & vecSrc);

#endif // SUBSETSUM_H
