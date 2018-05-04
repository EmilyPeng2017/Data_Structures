#pragma once
#include <iostream>
using namespace std;
/*
要求：
	定义Coordinate坐标类
	改造栈类，使其可以适用于坐标类

	目的：灵活掌握栈机制，理解抽象数据类型在栈中的应用
*/

class Coordinate
{
	friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
	Coordinate(int x=0, int y=0);//=0使其编程默认的构造函数
	void printCoordinate();
private:
	int m_iX;
	int m_iY;
};
Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}
void Coordinate::printCoordinate()
{
	cout << "(" << m_iX << "," << m_iY << ")" << endl;//打印横纵坐标

}

ostream &operator<<(ostream &out, Coordinate &coor)
{
	out << "(" << coor.m_iX << "," << coor.m_iY << ")" << endl;
	return out;
}