//环形队列的C++实现
#include "Queue.h"
#include <iostream>
using namespace std;
//Queue::Queue(int queueCapacity)
//{
//	m_iQueueCapacity = queueCapacity;
//	m_pQueue = new int[m_iQueueCapacity];
//	ClearQueue();
//}
Queue::Queue(int queueCapacity)
{
	m_iQueueCapacity = queueCapacity;
	m_pQueue = new Customer[m_iQueueCapacity];
	ClearQueue();
}


Queue::~Queue()
{
	delete[]m_pQueue;
	m_pQueue = nullptr;
}

void Queue::ClearQueue()
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}

bool Queue::QueueEmpty() const
{
	/*if (m_iQueueLen == 0)
		return true;
	else
		return false;*/
	return m_iQueueLen == 0 ? true : false;
}

int Queue::QueueLength() const
{
	return m_iQueueLen;
}

bool Queue::QueueFull() const
{
	return m_iQueueLen == m_iQueueCapacity ? true:false;
}

//bool Queue::EnQueue(int element)
//{
//	if (QueueFull())
//	{
//		return false;
//		}
//	else
//	{
//		m_pQueue[m_iTail] = element;
//		m_iTail++;
//		m_iTail = m_iTail%m_iQueueCapacity;
//		m_iQueueLen++;
//		return true;
//	}
//}
bool Queue::EnQueue(Customer element)
{
	if (QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail] = element;
		m_iTail++;
		m_iTail = m_iTail%m_iQueueCapacity;
		m_iQueueLen++;
		return true;
	}
}

//bool Queue::DeQueue(int &element)
//{
//	if (QueueEmpty())
//	{
//		return false;
//	}
//	else
//	{
//		element = m_pQueue[m_iHead];
//		m_iHead++;
//		m_iHead = m_iHead%m_iQueueCapacity;
//		m_iQueueLen--;
//		return true;
//	}
//}
bool Queue::DeQueue(Customer &element)
{
	if (QueueEmpty())
	{
		return false;
	}
	else
	{
		element = m_pQueue[m_iHead];
		m_iHead++;
		m_iHead = m_iHead%m_iQueueCapacity;
		m_iQueueLen--;
		return true;
	}
}

//void Queue::QueueTranverse()
//{
//	for (int i = m_iHead; i < m_iQueueLen+m_iHead; i++)
//	{
//		cout << m_pQueue[i%m_iQueueCapacity] << endl;
//	}
//}

void Queue::QueueTranverse()
{
	for (int i = m_iHead; i < m_iQueueLen + m_iHead; i++)
	{
		m_pQueue[i%m_iQueueCapacity].printInfo();
		cout << "前面还有：" << i - m_iHead << "个人" << endl;
	}
}