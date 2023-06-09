#include "number-of-provinces.h"

int Solution::findCircleNum(std::vector<std::vector<int>>& isConnected) {
	const __int8 size{ static_cast<__int8>(isConnected.size()) };
	__int8* provinces{ new __int8[size]{} };
	__int8 last_town{};
	int output{ 0 };
	for (__int8 index{}; index != size; ++index)
		provinces[index] = index;
	for (__int8 town{}; town != size; ++town)
		for (__int8 road{}; road != size; ++road)
			if (isConnected[town][road] && provinces[town] < road)
				provinces[town] = road;
	for (__int8 town{}; town != size; ++town)
		for (__int8 province{}; province != size; ++province)
			if (town == provinces[province]) {
				++output;
				break;
			}
	delete[] provinces;
	return output;
};