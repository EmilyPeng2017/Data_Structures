#include <iostream>
#include <stdlib.h>
#include "Queue.h"


using namespace std;
int main(void)
{
	/*Queue *p = new Queue(4);
	
	p->EnQueue(10);
	p->EnQueue(12);
	p->EnQueue(14);
	p->EnQueue(15);
	p->EnQueue(22);

	p->QueueTranverse();

	int e = 0;
	p->DeQueue(e);
	cout << endl;
	cout << e << endl;

	p->DeQueue(e);
	cout << endl;
	cout << e << endl;

	p->ClearQueue();
	p->QueueTranverse();
*/
	Queue *p = new Queue(4);
	Customer c1("qiangqiang", 20);
	Customer c2("saisai", 20);
	Customer c3("xiaoxiao", 21);

	p->EnQueue(c1);
	p->EnQueue(c2);
	p->EnQueue(c3);

	p->QueueTranverse();
	Customer c4("", 2);//c4只能获取的是队列的第一个元素，也就是每次队列只能得到第一个元素！！！
	p->DeQueue(c4);
	//c4.printInfo();
	p->QueueTranverse();
	delete p;
	p = NULL;

	system("pause");
	return 0;
}