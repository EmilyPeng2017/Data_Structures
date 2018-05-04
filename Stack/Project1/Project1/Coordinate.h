#pragma once
#include <iostream>
using namespace std;
/*
Ҫ��
	����Coordinate������
	����ջ�࣬ʹ�����������������

	Ŀ�ģ��������ջ���ƣ�����������������ջ�е�Ӧ��
*/

class Coordinate
{
	friend ostream &operator<<(ostream &out, Coordinate &coor);
public:
	Coordinate(int x=0, int y=0);//=0ʹ����Ĭ�ϵĹ��캯��
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
	cout << "(" << m_iX << "," << m_iY << ")" << endl;//��ӡ��������

}

ostream &operator<<(ostream &out, Coordinate &coor)
{
	out << "(" << coor.m_iX << "," << coor.m_iY << ")" << endl;
	return out;
}