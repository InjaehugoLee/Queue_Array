//10장-2. Queue1.cpp
//generic class Queue의 member 함수 정의
#include <iostream>
#include "queue.h"
using namespace std;
TYPE Queue::Push(TYPE item) {
	if (Full())
	{
		cout << "더 이상 입력이 불가합니다." << endl;
		return 0;
	}

	data[sidx++] = item;  // 데이터배열의 첫번째 칸에 첫번째 값을 넣고 +1
	if (sidx == Queuesize)
	{
		sidx = 0;
	}
	nElements++;
}

TYPE Queue::Pop() {
	if (Empty())
	{
		cout << "비어있습니다." << endl;
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

