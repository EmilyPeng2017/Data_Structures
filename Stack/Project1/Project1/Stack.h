#pragma once
#include "Coordinate.h"
template <typename T>//ʹ����ģ��
class Stack
{
public:
	Stack(int size);//�����ڴ��ʼ��ջ�ؼ����趨ջ������ջ��
	~Stack();//����ջ�ؼ��ڴ�
	bool stackEmpty();//�ж�ջ�Ƿ�Ϊ�գ�Ϊ�շ���TRUE���ǿշ���FALSE
	bool stackFull();  //�ж�ջ�Ƿ�������Ϊ������TRUE����������FALSE
	void clearStack();//���ջ
	int stackLength();//����Ԫ�صĸ���
	//bool push(char element);//Ԫ����ջ��ջ������
	//bool pop(char &element);//Ԫ�س�ջ��ջ���½�
	//bool push(Coordinate element);//Ԫ����ջ��ջ������
	//bool pop(Coordinate &element);//Ԫ�س�ջ��ջ���½�
	bool push(T element);//Ԫ����ջ��ջ������
	bool pop(T &element);//Ԫ�س�ջ��ջ���½�
	void stackTraverse(bool isFromBottom);//����ջ������Ԫ��

private:
	//char *m_pBuffer;//ջ�ؼ�ָ��
	/*Coordinate *m_pBuffer;*/
	T *m_pBuffer;
	int m_iSize;//ջ����
	int m_iTop;//ջ����ջ��Ԫ�ظ���
};

template <typename T>
Stack<T>::Stack(int size)
{
	m_iSize = size;
	m_pBuffer = new T[size];//���ǰ��û�и�Coordinate(int x=0, int y=0);//=0ʹ����Ĭ�ϵĹ��캯��������ͻᱨ��
	m_iTop = 0;
}
template <typename T>
Stack<T>::~Stack()
{
	delete[]m_pBuffer;
}
template <typename T>
bool Stack<T>::stackEmpty()
{
	if (m_iTop == 0)//Ϊ����ߴ��������������д��if(0==m_iTop)�������д����һ���Ⱥţ�ϵͳ�ᱨ��
		return true;
	else
		return false;
}
template <typename T>
bool Stack<T>::stackFull()
{
	return m_iSize == m_iTop ? true : false;

}
template <typename T>
void Stack<T>::clearStack()
{
	m_iTop = 0;

}
template <typename T>
int Stack<T>::stackLength()
{
	return m_iTop;
}

//bool Stack::push(char element)
//{
//	if (stackFull())
//	{
//		return false;
//	}
//	m_pBuffer[m_iTop] = element;
//	m_iTop++;
//	return true;
//}
//bool Stack::pop(char &element)
//{
//	if (stackEmpty())
//	{
//		return false;
//	}
//	m_iTop--;
//	element = m_pBuffer[m_iTop];
//	return true;
//}
template <typename T>
bool Stack<T>::push(T element)
{
	if (stackFull())
	{
		return false;
	}
	m_pBuffer[m_iTop] = element;
	m_iTop++;
	return true;
}
template <typename T>
bool Stack<T>::pop(T &element)
{
	if (stackEmpty())
	{
		return false;
	}
	m_iTop--;
	element = m_pBuffer[m_iTop];
	return true;
}


/*char Stack::pop()   ������ص���char   ����������д��
{
if (stackEmpty())
{
throw 1;
}
else
{
m_iTop--;
return m_pBuffer[m_iTop];
}
}*/

//void Stack::stackTraverse(bool isFromBottom)
//{
//	if (isFromBottom)
//	{
//		for (int i = m_iTop-1; i >=0; i--)
//		{
//			cout << m_pBuffer[i];
//
//		}
//	}
//	else
//	{
//		for (int i = 0; i < m_iTop; i++)
//			{
//				cout << m_pBuffer[i];
//
//			}
//	}
//	
//}
template <typename T>
void Stack<T>::stackTraverse(bool isFromBottom)
{
	if (isFromBottom)
	{
		for (int i = m_iTop - 1; i >= 0; i--)
		{
			m_pBuffer[i].printCoordinate();
		}
	}
	else
	{
		for (int i = 0; i < m_iTop; i++)
		{
			m_pBuffer[i].printCoordinate();
		}
	}

}