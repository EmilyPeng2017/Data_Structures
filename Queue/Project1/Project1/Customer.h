#pragma once

#include <string>
using namespace std;

class Customer
{
public:
	Customer(string name="", int age=0); //Customer(string name, int age);�ĳ��������Ա�֤����ͨ��
	void printInfo() const;
private:
	string m_strName;
	int m_iAge;
};