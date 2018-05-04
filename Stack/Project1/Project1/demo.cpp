#include <iostream>
#include "stdlib.h"
#include "Stack.h"
using namespace std;

/*
栈类
要求
	Stack(int size);//分配内存初始化栈控件，设定栈容量，栈顶
	~Stack();//回收栈控件内存
	bool stackEmpty();//判定栈是否为空，为空返回TRUE，非空返回FALSE
	bool stackFull();  //判定栈是否已满，为满返回TRUE，不满返回FALSE
	void clearStack();//清空栈
	int stackLength();//已有元素的个数
	void push(char element);//元素入栈，栈顶上升
	char pop(char &element);//元素出栈，栈顶下降
	void stackTraverse();//遍历栈中所有元素
*/

int main(void)
{
	//Stack *pStack = new Stack(5);
	//pStack->push('h');//栈底
	//pStack->push('e');
	//pStack->push('l');
	//pStack->push('l');
	//pStack->push('o');//栈顶
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
	pStack->push(Coordinate(1,2));//栈底
	pStack->push(Coordinate(2,2));
	pStack->push(Coordinate(3,2));
	pStack->push(Coordinate(4,2));
	pStack->push(Coordinate(5,2));//栈顶
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