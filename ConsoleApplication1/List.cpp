#include "List.h"
#include <iostream>
using namespace std;

List::List(int size)
{
	m_iSize = size;
	m_pList = new Coordinate[size];
	m_iLength = 0;
}
List::~List()
{
	delete []m_pList;
	m_pList = NULL;
}

void List::ClearList()
{
	m_iLength = 0;
}

bool List::ListEmpty()
{
	if (m_iLength == 0) {
		return true;
	}
	else
	{
		return false;
	}
}

int List::ListLength()
{
	return m_iLength;
}

bool List::GetElem(int i, Coordinate* e)
{
	if (i < 0 || i >= m_iSize) {
		return false;
	}
	else {
		*e = m_pList[i];
		return true;
	}
	
}

int List::LocateElem(Coordinate* e)
{
	for (int i=0;i<m_iLength;i++)
	{
		if (e->X() == m_pList[i].X()&& e->Y()==m_pList[i].Y()) {
			return i;
		}
	}
	return -1;
}

bool List::PriorElem(Coordinate* currentElem, Coordinate* preElem)
{
	int index = LocateElem(currentElem);
	if (index == -1) {
		return false;
	}
	else
	{
		if (index == 0)
		{
			return false;
		}
		else
		{
			*preElem = m_pList[--index];
			return true;
		}
	}
}

bool List::NextElem(Coordinate* currentElem, Coordinate* nextElem)
{
	int index = LocateElem(currentElem);
	if (index == -1) {
		return false;
	}
	else
	{
		if (index == m_iLength-1)
		{
			return false;
		}
		else
		{
			*nextElem = m_pList[index+1];
			return true;
		}
	}
}

void List::ListTraverse()
{
	for (int i=0;i<m_iLength;i++)
	{
		cout << m_pList[i] << " ";
	}
	cout << endl;
}

bool List::ListInsert(int i, Coordinate* e)
{
	if (i<0||i>m_iLength)
	{
		return false;
	}
	for (int k=m_iLength-1;k>=i;k--)
	{
		m_pList[k + 1] = m_pList[k];
	}
	m_pList[i] = *e;
	m_iLength++;
	return true;
}

bool List::ListDelete(int i, Coordinate* e)
{

	if (i<0 || i>=m_iLength)
	{
		return false;
	}
	m_pList[i] = *e;
	for (int k = i+1; k < m_iLength; k++)
	{
		m_pList[k-1] = m_pList[k];
	}
	m_iLength--;
	return true;

}
