//#include "Stack.h"
//#include <iostream>
//using namespace std;
//
//template <typename T>
//
////Stack::Stack(int size)
////{
////	m_iSize = size;
////	m_pBuffer = new char[size];
////	m_iTop = 0;
////}
//
//Stack<T>::Stack(int size)
//{
//	m_iSize = size;
//	m_pBuffer = new T[size];//如果前面没有给Coordinate(int x=0, int y=0);//=0使其编程默认的构造函数，这里就会报错
//	m_iTop = 0;
//}
//template <typename T>
//Stack<T>::~Stack()
//{
//	delete[]m_pBuffer;
//}
//template <typename T>
//bool Stack<T>::stackEmpty()
//{
//	if (m_iTop == 0)//为了提高代码的质量，建议写成if(0==m_iTop)这样如果写掉了一个等号，系统会报错
//		return true;
//	else
//		return false;
//}
//template <typename T>
//bool Stack<T>::stackFull()
//{
//	return m_iSize == m_iTop ? true : false;
//
//}
//template <typename T>
//void Stack<T>::clearStack()
//{
//	m_iTop = 0;
//
//}
//template <typename T>
//int Stack<T>::stackLength()
//{
//	return m_iTop;
//}
//
////bool Stack::push(char element)
////{
////	if (stackFull())
////	{
////		return false;
////	}
////	m_pBuffer[m_iTop] = element;
////	m_iTop++;
////	return true;
////}
////bool Stack::pop(char &element)
////{
////	if (stackEmpty())
////	{
////		return false;
////	}
////	m_iTop--;
////	element = m_pBuffer[m_iTop];
////	return true;
////}
//template <typename T>
//bool Stack<T>::push(T element)
//{
//	if (stackFull())
//	{
//		return false;
//	}
//	m_pBuffer[m_iTop] = element;
//	m_iTop++;
//	return true;
//}
//template <typename T>
//bool Stack<T>::pop(T &element)
//{
//	if (stackEmpty())
//	{
//		return false;
//	}
//	m_iTop--;
//	element = m_pBuffer[m_iTop];
//	return true;
//}
//
//
///*char Stack::pop()   如果返回的是char   可以是这种写法
//{
//	if (stackEmpty())
//	{
//		throw 1;
//	}
//	else
//	{
//		m_iTop--;
//		return m_pBuffer[m_iTop];
//	}
//}*/
//
////void Stack::stackTraverse(bool isFromBottom)
////{
////	if (isFromBottom)
////	{
////		for (int i = m_iTop-1; i >=0; i--)
////		{
////			cout << m_pBuffer[i];
////
////		}
////	}
////	else
////	{
////		for (int i = 0; i < m_iTop; i++)
////			{
////				cout << m_pBuffer[i];
////
////			}
////	}
////	
////}
//template <typename T>
//void Stack<T>::stackTraverse(bool isFromBottom)
//{
//	if (isFromBottom)
//	{
//		for (int i = m_iTop - 1; i >= 0; i--)
//		{
//			m_pBuffer[i].printCoordinate();
//		}
//	}
//	else
//	{
//		for (int i = 0; i < m_iTop; i++)
//		{
//			m_pBuffer[i].printCoordinate();
//		}
//	}
//
//}