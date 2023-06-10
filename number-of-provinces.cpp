#include "number-of-provinces.h"
#include <iostream>

int Solution::findCircleNum(std::vector<std::vector<int>>& isConnected) {
	const __int8 size{ static_cast<__int8>(isConnected.size()) };
	__int8* provinces{ new __int8[size]{} };
	__int8* last{ new __int8[size]{} };
	__int8 last_town{};
	__int8 difference{};
	int output{ 0 };
	for (__int8 index{}; index != size; ++index) {
		provinces[index] = index;
		std::cout << (int)provinces[index] << ' ';
	}
	while (true) {
		std::cout << std::endl;
		difference = 0;
		for (__int8 town{}; town != size; ++town) {
			for (__int8 road{}; road != size; ++road) {
				last[town] = provinces[town];
				if (isConnected[town][road] && provinces[town] > provinces[road])
					provinces[town] = provinces[road];
			}
			std::cout << (int)provinces[town] << ' ';
		}
		for (__int8 index{}; index != size; ++index)
			if (provinces[index] != last[index])
				++difference;
		if (!difference)
			break;
	}
	std::cout << std::endl;
	for (__int8 town{}; town != size; ++town)
		for (__int8 province{}; province != size; ++province)
			if (town == provinces[province]) {
				++output;
				break;
			}
	delete[] last;
	delete[] provinces;
	return output;
};