#pragma once
//���ζ��е�ʵ��
#include "Customer.h"

class Queue
{
//public:
//	Queue(int queueCapacity);//InitQueue(&Q) ��������
//	virtual ~Queue();		//DestroyQueue(&Q)���ٶ���
//	void ClearQueue();		//ClearQueue(&Q)��ն���
//	bool QueueEmpty() const;//QueueEmpty(Q)�жϿն���
//	bool QueueFull() const;//QueueFull(Q)�ж϶����Ƿ���
//	int QueueLength() const;//QueueLength(Q)���г���
//	bool EnQueue(int element);//EnQueue(&Q,element)��Ԫ�����
//	bool DeQueue(int &element);//DeQueue(&Q,element)��Ԫ�س���
//	void QueueTranverse();//QueueTranverse(Q,visit())�������� ֮������visit()����������Ϊ���ܷ��ʵ�Ԫ�����޸���
//private:
//	int *m_pQueue;//��������ָ��
//	int m_iQueueLen;//����Ԫ�ظ���
//	int m_iQueueCapacity;//������������
//
//	int m_iHead;
//	int m_iTail;//��ͷ�Ͷ�β
public:
	Queue(int queueCapacity);//InitQueue(&Q) ��������
	virtual ~Queue();		//DestroyQueue(&Q)���ٶ���
	void ClearQueue();		//ClearQueue(&Q)��ն���
	bool QueueEmpty() const;//QueueEmpty(Q)�жϿն���
	bool QueueFull() const;//QueueFull(Q)�ж϶����Ƿ���
	int QueueLength() const;//QueueLength(Q)���г���
	bool EnQueue(Customer element);//EnQueue(&Q,element)��Ԫ�����
	bool DeQueue(Customer &element);//DeQueue(&Q,element)��Ԫ�س���
	void QueueTranverse();//QueueTranverse(Q,visit())�������� ֮������visit()����������Ϊ���ܷ��ʵ�Ԫ�����޸���
private:
	Customer *m_pQueue;//��������ָ��
	int m_iQueueLen;//����Ԫ�ظ���
	int m_iQueueCapacity;//������������

	int m_iHead;
	int m_iTail;//��ͷ�Ͷ�β
};
