#include "Customer.h"
#include <iostream>
#include <string.h>
using namespace std;

Customer::Customer() {

}

Customer::Customer(string name,int age) {	
		m_strName = name;
		m_iAge = age;
}

void Customer::printInfo() {
	cout << m_strName << "  " << m_iAge << endl;
}
