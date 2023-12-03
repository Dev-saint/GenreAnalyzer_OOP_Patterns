#ifndef __BEHAVIOUR
#define __BEHAVIOUR
#include "Actions.h"
#include "iostream"

using namespace std;

//���������� ����
class receiveTypeAnalyzer : public IReceive
{
public:
	void receive()
	{
		cout << "������� ������ � ����������� ���������� �� ������������ ��� �� ���� ������!" << endl;
	}
};

class analyzeTypeAnalyzer : public IAnalyze
{
public:
	void analyze()
	{
		cout << "���������� ������ ��� ����������� ���� ����������!" << endl;
	}
};

class determineTypeAnalyzer : public IDetermine
{
public:
	void determine()
	{
		cout << "��������� ��� ����������� ����������!" << endl;
	}
};

class transferTypeAnalyzer : public ITransfer
{
public:
	void transfer()
	{
		cout << "������� ��� ���������� � ������������ ������ (�����������, ���������, ����������������� � �.�.) ����������� �����!" << endl;
	}
};

//���������� �����
class receiveGenreAnalyzer : public IReceive
{
public:
	void receive()
	{
		cout << "������� ��� ���������� � ������������ ������ �� ����������� ����!" << endl;
	}
};

class analyzeGenreAnalyzer : public IAnalyze
{
public:
	void analyze()
	{
		cout << "���������� ������ ��� ����������� ����� ����������!" << endl;
	}
};

class determineGenreAnalyzer : public IDetermine
{
public:
	void determine()
	{
		cout << "��������� ���� ����������� ����������!" << endl;
	}
};

class transferGenreAnalyzer : public ITransfer
{
public:
	void transfer()
	{
		cout << "������� ���� � ��� ���������� � ������������ ������ ����������� �����!" << endl;
	}
};

//���������� �����
class receiveStyleAnalyzer : public IReceive
{
public:
	void receive()
	{
		cout << "������� ���� � ��� ���������� � ������������ ������ �� ����������� �����!" << endl;
	}
};

class analyzeStyleAnalyzer : public IAnalyze
{
public:
	void analyze()
	{
		cout << "���������� ������ ��� ����������� ����� ����������!" << endl;
	}
};

class determineStyleAnalyzer : public IDetermine
{
public:
	void determine()
	{
		cout << "��������� ����� ����������� ����������!" << endl;
	}
};

class transferStyleAnalyzer : public ITransfer
{
public:
	void transfer()
	{
		cout << "������� �����, ���� � ��� ���������� � ������������ ������ (�����������, ����������������� � ��.) ������������!" << endl;
	}
};

#endif 