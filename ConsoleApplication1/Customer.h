#ifndef CUSTOMER_H
#define CUSTOMER_H


#include <string>
#include <iostream>
using namespace std;
class Customer
{
public:
	Customer();
	Customer(string name, int age);
	void printInfo();
private:
	string m_strName;
	int m_iAge;
};
#endif // !CUSTOMER_H
