//10��-1 Queue.h
//generic ��ü��� ������ class Queue�� ���� ��ü�� ��ó���⿡ ����
//TYPE�� macro ���� �� �ۼ��� �������� ġȯ�� �� �����ȴ�.
#define TYPE int

class Queue {
	TYPE* data;
	int nElements;
	int Queuesize;
	int sidx, eidx; //��ŸƮ�ε���, �����ε���

public:
	Queue(int i = 5) : nElements(0) {
		Queuesize = i;
		data = new TYPE[Queuesize];
		sidx = eidx = 0; //�ʱ�ȭ����
	}
	~Queue() {
		delete[] data;
	}
	//�� ��Ҹ� Queue�� �߰�
	TYPE Push(TYPE item);
	//Queue���κ��� �� ��Ҹ� ����
	TYPE Pop();
	//Queue�� �ִ� ���� ����� ��
	//int Number();
	//Queue�� �����?
	//int Empty();
	//Queue�� á��?
	//int Full();
	int Number() { return nElements; }
	int Empty() { return (nElements == 0); }
	int Full() { return (nElements == Queuesize); }
};
