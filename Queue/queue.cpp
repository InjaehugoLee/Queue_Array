//10��-2. Queue1.cpp
//generic class Queue�� member �Լ� ����
#include <iostream>
#include "queue.h"
using namespace std;
TYPE Queue::Push(TYPE item) {
	if (Full())
	{
		cout << "�� �̻� �Է��� �Ұ��մϴ�." << endl;
		return 0;
	}

	data[sidx++] = item;  // �����͹迭�� ù��° ĭ�� ù��° ���� �ְ� +1
	if (sidx == Queuesize)
	{
		sidx = 0;
	}
	nElements++;
}

TYPE Queue::Pop() {
	if (Empty())
	{
		cout << "����ֽ��ϴ�." << endl;
		return 0;
	}
	TYPE ret = data[eidx++];

	if (eidx == Queuesize)
	{
		eidx = 0;
	}

	nElements--;
	return ret;
}

