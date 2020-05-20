#include <iostream>
#include <string>
#include <stdlib.h>
#include "MyStack.h"
#include "MyQueue.h"
#include "Customer.h"
using namespace std;//
int main(void)
{
	MyQueue* q = new MyQueue(5);
	Customer c1("gzc", 26);
	Customer c2("zs", 25);
	Customer c3("ls", 24);


	q->EnQueue(c1);
	q->EnQueue(c2);
	q->EnQueue(c3);
	Customer customer;
	q->QueueTraverse();
	q->DeQueue(customer);
	customer.printInfo();

	q->QueueTraverse();
}