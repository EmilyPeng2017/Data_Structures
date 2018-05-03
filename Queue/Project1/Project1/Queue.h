#pragma once
//环形队列的实现
#include "Customer.h"

class Queue
{
//public:
//	Queue(int queueCapacity);//InitQueue(&Q) 创建队列
//	virtual ~Queue();		//DestroyQueue(&Q)销毁队列
//	void ClearQueue();		//ClearQueue(&Q)清空队列
//	bool QueueEmpty() const;//QueueEmpty(Q)判断空队列
//	bool QueueFull() const;//QueueFull(Q)判断队列是否满
//	int QueueLength() const;//QueueLength(Q)队列长度
//	bool EnQueue(int element);//EnQueue(&Q,element)新元素入队
//	bool DeQueue(int &element);//DeQueue(&Q,element)首元素出队
//	void QueueTranverse();//QueueTranverse(Q,visit())遍历队列 之所以是visit()函数，是因为可能访问的元素无限复杂
//private:
//	int *m_pQueue;//队列数组指针
//	int m_iQueueLen;//队列元素个数
//	int m_iQueueCapacity;//队列数组容量
//
//	int m_iHead;
//	int m_iTail;//队头和队尾
public:
	Queue(int queueCapacity);//InitQueue(&Q) 创建队列
	virtual ~Queue();		//DestroyQueue(&Q)销毁队列
	void ClearQueue();		//ClearQueue(&Q)清空队列
	bool QueueEmpty() const;//QueueEmpty(Q)判断空队列
	bool QueueFull() const;//QueueFull(Q)判断队列是否满
	int QueueLength() const;//QueueLength(Q)队列长度
	bool EnQueue(Customer element);//EnQueue(&Q,element)新元素入队
	bool DeQueue(Customer &element);//DeQueue(&Q,element)首元素出队
	void QueueTranverse();//QueueTranverse(Q,visit())遍历队列 之所以是visit()函数，是因为可能访问的元素无限复杂
private:
	Customer *m_pQueue;//队列数组指针
	int m_iQueueLen;//队列元素个数
	int m_iQueueCapacity;//队列数组容量

	int m_iHead;
	int m_iTail;//队头和队尾
};
