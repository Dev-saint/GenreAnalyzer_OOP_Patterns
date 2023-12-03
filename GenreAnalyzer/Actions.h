#ifndef __ACTIONS
#define __ACTIONS

//интерфейсы действий анализаторов
class IReceive   // получение данных
{
public:
	virtual void receive() = 0;
};

class IAnalyze   // анализ
{
public:
	virtual void analyze() = 0;
};

class IDetermine   // определение
{
public:
	virtual void determine() = 0;
};

class ITransfer   // передача данных
{
public:
	virtual void transfer() = 0;
};

#endif