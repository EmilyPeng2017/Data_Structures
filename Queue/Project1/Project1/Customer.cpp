#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(string name, int age)
{
	m_strName = name;
	m_iAge = age;

}

void Customer::printInfo() const
{
	cout << "name: " << m_strName << endl;
	cout << "age: " << m_iAge << endl;
	cout << endl;
}