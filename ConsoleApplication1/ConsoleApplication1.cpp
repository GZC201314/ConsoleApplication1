#include <iostream>
#include <string>
#include <stdlib.h>
#include "MyStack.h"
#include "MyQueue.h"
#include "Customer.h"
#include "List.h"

using namespace std;//
int main(void)
{
	//3 5 7 2 9 1 8 
	Coordinate e1(3,5);
	Coordinate e2(1, 5);
	Coordinate e3(2, 5);
	Coordinate e4(4, 5);
	Coordinate e5(6, 5);
	Coordinate e6(5, 5);
	Coordinate e7(8, 5);

	List* list1 = new List(10);
	list1->ListInsert(0, &e1);
	list1->ListInsert(1, &e2);
	list1->ListInsert(2, &e3);
	list1->ListInsert(3, &e4);
	list1->ListInsert(4, &e5);
	list1->ListInsert(5, &e6);
	list1->ListInsert(6, &e7);

	cout<<list1->LocateElem(&e5)<<endl;
	list1->ListTraverse();
	delete list1;
	return 0;
}