#pragma once

class Customer
{
private:
	long arrive; //�����ߵ���ʱ��
	int processtime; //����ҵ���ʱ��
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

typedef Customer Item; //���໻��������������Ը��ô���


class Queue
{
private:
	enum {Q_SIZE=10};//Ϊʲô������ö�ٶ����Ǿ�̬����
	struct Node
	{
		Item item;
		struct Node* next;
	};
private:
	Node* front;//��һ����Ŀ
	Node* rear; //���һ����Ŀ
	int items; //��Ŀ����
	const int qsize;
public: 
	Queue(int qs=Q_SIZE);//���캯��
	~Queue();//��������
	//Queue(const Queue& q) :qsize(0) {} //���ƹ��캯������
	//Queue & operator=(const Queue& q) { return*this; }//��ֵ���������

	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item & item);
	bool dequeue(Item & item);

	void show() const;//չʾ��������
};



