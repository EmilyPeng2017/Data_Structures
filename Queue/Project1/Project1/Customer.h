#pragma once

#include <string>
using namespace std;

class Customer
{
public:
	Customer(string name="", int age=0); //Customer(string name, int age);改成这样可以保证编译通过
	void printInfo() const;
private:
	string m_strName;
	int m_iAge;
};