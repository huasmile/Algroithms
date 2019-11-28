#ifndef ALGROITHM_H_
#define ALGROITHM_H_

#include<vector>
#include<map>
#include<algorithm>

#include "model.h"

namespace Algroithms {
	// 字符串类算法
	class Strings {
	public:

	};

	// 数组类算法
	class Arrays {
	public:
		// 数组中和为某值得两个数
		static std::vector<int> twoSum(int target, std::vector<int> nums);
	};

	// 链表类算法
	class List {
	public:
		// 两个逆序链表反转后组成十进制数字
		static StructData::node<int>* addTwoNumbers(StructData::node<int> n1, StructData::node<int> n2);
	};

	// 树类算法
	class Tree {
	public:

	};

	// 图论类算法
	class Graph {
	public:

	};

	// 栈类算法
	class Stack {
	public:

	};
}
#endif // !ALGROITHM_H_

