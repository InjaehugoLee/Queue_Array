//10장-3 Queue_use.cpp
//class Queue의 instance 예제
#include <iostream>
#include "queue.h"
//정수 Queue 정의
using namespace std;
void main() {

	Queue* a = new Queue(5);
	a->Push(100);
	a->Push(200);
	a->Push(300);
	a->Push(400);
	a->Push(500);
	

	cout << a->Pop() << endl;
	cout << a->Pop() << endl;
	cout << a->Pop() << endl;
	cout << a->Pop() << endl;
	cout << a->Pop() << endl;
	


	//값을 Queue에 넣는다


	////Queue을 비우면서 요소를 출력
	//while (!a->Empty()) {
	//	cout << a->Pop() << endl;
	//	
	//}
	delete a;
	system("pause");
}