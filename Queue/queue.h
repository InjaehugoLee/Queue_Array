//10장-1 Queue.h
//generic 객체들로 구성된 class Queue에 대한 객체는 전처리기에 의해
//TYPE이 macro 선언 시 작성된 내용으로 치환된 후 생성된다.
#define TYPE int

class Queue {
	TYPE* data;
	int nElements;
	int Queuesize;
	int sidx, eidx; //스타트인덱스, 엔드인덱스

public:
	Queue(int i = 5) : nElements(0) {
		Queuesize = i;
		data = new TYPE[Queuesize];
		sidx = eidx = 0; //초기화해줌
	}
	~Queue() {
		delete[] data;
	}
	//한 요소를 Queue에 추가
	TYPE Push(TYPE item);
	//Queue으로부터 한 요소를 얻음
	TYPE Pop();
	//Queue에 있는 실제 요소의 수
	//int Number();
	//Queue이 비었나?
	//int Empty();
	//Queue이 찼나?
	//int Full();
	int Number() { return nElements; }
	int Empty() { return (nElements == 0); }
	int Full() { return (nElements == Queuesize); }
};
