#include "Coordinate.h"
#ifndef LIST_H
#define LIST_H


class List
{
public:
	List(int size);
	~List();
	void ClearList();
	bool ListEmpty();
	int ListLength();
	bool GetElem(int i, Coordinate *e);
	int LocateElem(Coordinate* e);
	bool PriorElem(Coordinate* currentElem, Coordinate* preElem);
	bool NextElem(Coordinate* currentElem, Coordinate* nextElem);
	void ListTraverse();
	bool ListInsert(int i, Coordinate*e);
	bool ListDelete(int i, Coordinate* e);
private:
	Coordinate* m_pList;
	int m_iSize;
	int m_iLength;
};
#endif // !LIST_H
