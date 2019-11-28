#include "Algorithms.h"
namespace Algroithms {
	
	std::vector<int> Arrays::twoSum(int target, std::vector<int> nums)
	{
		std::vector<int> result;
		for (unsigned int x = 0; x < nums.size() - 1; x++) {
			for (unsigned int y = x + 1; y < nums.size(); y++) {
				if (nums.at(x) + nums.at(y) == target) {
					result.push_back(x);
					result.push_back(y);
				}
			}
		}
		return result;
	}

	StructData::node<int>* List::addTwoNumbers(StructData::node<int> n1, StructData::node<int> n2)
	{
		StructData::node<int> *nodes = new StructData::node<int>;
		return nodes;
	}
}
