#ifndef MYSTACK_H
#define MYSTACK_H
#endif // !MYSTACK_H

class MyStack
{
public:
	MyStack(int size);
	~MyStack();
	bool stackEmpty();
	bool stackFull();
	void clearStack();
	int stackLength();
	bool push(char elem);
	bool pop(char &elem);
	char pop();
	void stackTraverse(bool isFromButtom);
private:
	char *m_pBuffer;
	int m_iSize;
	int m_iTop;
};

