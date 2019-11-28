#ifndef MODEL_H_
#define MODEL_H_
namespace StructData {
	// �����ڵ�
	template<class T>
	struct node {
		T value;
		struct node *next;
	};

}
#endif // !MODEL_H_
