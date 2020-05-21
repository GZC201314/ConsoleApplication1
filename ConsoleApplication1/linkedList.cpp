#include "linkedList.h"
#include <iostream>
using namespace std;
linkedList::linkedList()
{
	m_pList = new Node;
	m_pList->data = 0;
	m_pList->next = NULL;
	m_iLength = 0;
}
