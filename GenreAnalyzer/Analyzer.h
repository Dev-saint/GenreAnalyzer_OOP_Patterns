#ifndef __ANALYZER
#define __ANALYZER
#include "Actions.h"
#include "Behavior.h"
using namespace std;

class Analyzer	//����������� ����� ������������
{
public:
	IReceive* receive;
	IAnalyze* analyze;
	IDetermine* determine;
	ITransfer* transfer;
	Analyzer() {}
	//������������� ��������
	void receiveMusicData() { receive->receive(); }
	void analyzeMusicData() { analyze->analyze(); }
	void determineCategory() { determine->determine(); }
	void transferMusicData() { transfer->transfer(); }
};

//���������� ����
class TypeAnalyzer :public Analyzer
{
public:
	TypeAnalyzer()
	{
		receive = new receiveTypeAnalyzer();
		analyze = new analyzeTypeAnalyzer();
		determine = new determineTypeAnalyzer();
		transfer = new transferTypeAnalyzer();
	}
};

//���������� �����
class GenreAnalyzer :public Analyzer
{
public:
	GenreAnalyzer()
	{
		receive = new receiveGenreAnalyzer();
		analyze = new analyzeGenreAnalyzer();
		determine = new determineGenreAnalyzer();
		transfer = new transferGenreAnalyzer();
	}
};

//���������� ����
class StyleAnalyzer :public Analyzer
{
public:
	StyleAnalyzer()
	{
		receive = new receiveStyleAnalyzer();
		analyze = new analyzeStyleAnalyzer();
		determine = new determineStyleAnalyzer();
		transfer = new transferStyleAnalyzer();
	}
};

#endif __ANALYZER