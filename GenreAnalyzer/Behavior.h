#ifndef __BEHAVIOUR
#define __BEHAVIOUR
#include "Actions.h"
#include "iostream"

using namespace std;

//Анализатор типа
class receiveTypeAnalyzer : public IReceive
{
public:
	void receive()
	{
		cout << "Получил данные о музыкальной композиции от пользователя или из базы данных!" << endl;
	}
};

class analyzeTypeAnalyzer : public IAnalyze
{
public:
	void analyze()
	{
		cout << "Анализирую данные для определения типа композиции!" << endl;
	}
};

class determineTypeAnalyzer : public IDetermine
{
public:
	void determine()
	{
		cout << "Определяю тип музыкальной композиции!" << endl;
	}
};

class transferTypeAnalyzer : public ITransfer
{
public:
	void transfer()
	{
		cout << "Передаю тип композиции и обработанные данные (тональность, громкость, продолжительность и т.д.) анализатору жанра!" << endl;
	}
};

//Анализатор жанра
class receiveGenreAnalyzer : public IReceive
{
public:
	void receive()
	{
		cout << "Получил тип композиции и обработанные данные от анализатора типа!" << endl;
	}
};

class analyzeGenreAnalyzer : public IAnalyze
{
public:
	void analyze()
	{
		cout << "Анализирую данные для определения жанра композиции!" << endl;
	}
};

class determineGenreAnalyzer : public IDetermine
{
public:
	void determine()
	{
		cout << "Определяю жанр музыкальной композиции!" << endl;
	}
};

class transferGenreAnalyzer : public ITransfer
{
public:
	void transfer()
	{
		cout << "Передаю жанр и тип композиции и обработанные данные анализатору стиля!" << endl;
	}
};

//Анализатор стиля
class receiveStyleAnalyzer : public IReceive
{
public:
	void receive()
	{
		cout << "Получил жанр и тип композиции и обработанные данные от анализатора жанра!" << endl;
	}
};

class analyzeStyleAnalyzer : public IAnalyze
{
public:
	void analyze()
	{
		cout << "Анализирую данные для определения стиля композиции!" << endl;
	}
};

class determineStyleAnalyzer : public IDetermine
{
public:
	void determine()
	{
		cout << "Определяю стиль музыкальной композиции!" << endl;
	}
};

class transferStyleAnalyzer : public ITransfer
{
public:
	void transfer()
	{
		cout << "Передаю стиль, жанр и тип композиции и обработанные данные (тональность, продолжительность и др.) пользователю!" << endl;
	}
};

#endif 