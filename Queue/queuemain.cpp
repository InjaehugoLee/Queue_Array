//10��-3 Queue_use.cpp
//class Queue�� instance ����
#include <iostream>
#include "queue.h"
//���� Queue ����
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
	


	//���� Queue�� �ִ´�


	////Queue�� ���鼭 ��Ҹ� ���
	//while (!a->Empty()) {
	//	cout << a->Pop() << endl;
	//	
	//}
	delete a;
	system("pause");
}