#include <iostream>
#include "stdlib.h"
#include "Stack.h"
using namespace std;

/*
ջ��
Ҫ��
	Stack(int size);//�����ڴ��ʼ��ջ�ؼ����趨ջ������ջ��
	~Stack();//����ջ�ؼ��ڴ�
	bool stackEmpty();//�ж�ջ�Ƿ�Ϊ�գ�Ϊ�շ���TRUE���ǿշ���FALSE
	bool stackFull();  //�ж�ջ�Ƿ�������Ϊ������TRUE����������FALSE
	void clearStack();//���ջ
	int stackLength();//����Ԫ�صĸ���
	void push(char element);//Ԫ����ջ��ջ������
	char pop(char &element);//Ԫ�س�ջ��ջ���½�
	void stackTraverse();//����ջ������Ԫ��
*/

int main(void)
{
	//Stack *pStack = new Stack(5);
	//pStack->push('h');//ջ��
	//pStack->push('e');
	//pStack->push('l');
	//pStack->push('l');
	//pStack->push('o');//ջ��
	//pStack->stackTraverse(false);
	//char elem = 0;
	//pStack->pop(elem);
	//pStack->stackTraverse(false);

	//pStack->clearStack();
	//cout << pStack->stackLength() << endl;
	//if (pStack->stackEmpty())
	//{
	//	cout << "stack is empty" << endl;
	//}

	//if (pStack->stackFull())
	//{
	//	cout << "stack is full" << endl;
	//}

	//delete pStack;
	//pStack = NULL;

	//system("pause");
	//return 0;
	Stack<Coordinate> *pStack = new Stack<Coordinate>(5);
	pStack->push(Coordinate(1,2));//ջ��
	pStack->push(Coordinate(2,2));
	pStack->push(Coordinate(3,2));
	pStack->push(Coordinate(4,2));
	pStack->push(Coordinate(5,2));//ջ��
	pStack->stackTraverse(false);
	Coordinate elem = (0,3);
	pStack->pop(elem);
	pStack->stackTraverse(false);

	pStack->clearStack();
	cout << pStack->stackLength() << endl;
	if (pStack->stackEmpty())
	{
		cout << "stack is empty" << endl;
	}

	if (pStack->stackFull())
	{
		cout << "stack is full" << endl;
	}

	delete pStack;
	pStack = NULL;

	system("pause");
	return 0;
}