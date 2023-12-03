#ifndef __ACTIONS
#define __ACTIONS

//���������� �������� ������������
class IReceive   // ��������� ������
{
public:
	virtual void receive() = 0;
};

class IAnalyze   // ������
{
public:
	virtual void analyze() = 0;
};

class IDetermine   // �����������
{
public:
	virtual void determine() = 0;
};

class ITransfer   // �������� ������
{
public:
	virtual void transfer() = 0;
};

#endif