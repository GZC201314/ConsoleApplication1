#include <iostream>
#include <string>
#include <stdlib.h>
#include "MyStack.h"
using namespace std;//VAssistX
int main(void)
{
	MyStack* p = new MyStack(5);
	p->push('h');
	p->push('e');
	p->push('l');
	p->push('l');
	p->push('o');
	p->stackTraverse(false);
	delete p;
	p = NULL;
}