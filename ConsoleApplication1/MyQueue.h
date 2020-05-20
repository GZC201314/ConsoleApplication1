#ifndef MYQUEUE_H
#define MYQUEUE_H
#endif // !MYQUEUE_H
#include "Customer.h"
class MyQueue
{
public:
	MyQueue(int queueCapacity);//��ʼ������
	virtual ~MyQueue();//���ٶ���
	void ClearQueue();
	bool QueueEmpty() const;
	bool QueueFull() const;
	int QueueLength() const;
	bool EnQueue(Customer element);
	bool DeQueue(Customer& element);
	void QueueTraverse();
private:
	Customer* m_pQueue;
	int m_iQueueLen; //����Ԫ�ظ���
	int m_iQueueCapacity;
	int m_iHead;
	int m_iTail;
};

