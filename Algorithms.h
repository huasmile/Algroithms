#ifndef ALGROITHM_H_
#define ALGROITHM_H_

#include<vector>
#include<map>
#include<algorithm>

#include "model.h"

namespace Algroithms {
	// �ַ������㷨
	class Strings {
	public:

	};

	// �������㷨
	class Arrays {
	public:
		// �����к�Ϊĳֵ��������
		static std::vector<int> twoSum(int target, std::vector<int> nums);
	};

	// �������㷨
	class List {
	public:
		// ������������ת�����ʮ��������
		static StructData::node<int>* addTwoNumbers(StructData::node<int> n1, StructData::node<int> n2);
	};

	// �����㷨
	class Tree {
	public:

	};

	// ͼ�����㷨
	class Graph {
	public:

	};

	// ջ���㷨
	class Stack {
	public:

	};
}
#endif // !ALGROITHM_H_

