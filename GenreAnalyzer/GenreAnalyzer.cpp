// Patterns - Черкасов ПИ-02

//lab4
#include "Analyzer.h"
#include "Analization.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	cout << "Delegation:" << endl << endl;
	
	cout << "Анализатор типа:" << endl;
	TypeAnalyzer ta;
	ta.receiveMusicData();
	ta.analyzeMusicData();
	ta.determineCategory();
	ta.transferMusicData();

	cout << endl << "Анализатор жанра:" << endl;
	GenreAnalyzer ga;
	ga.receiveMusicData();
	ga.analyzeMusicData();
	ga.determineCategory();
	ga.transferMusicData();

	cout << endl << "Анализатор стиля:" << endl;
	StyleAnalyzer sa;
	sa.receiveMusicData();
	sa.analyzeMusicData();
	sa.determineCategory();
	sa.transferMusicData();

	cout << "Proxy:" << endl;

	cout << "Композиция - In the end, Альтернатива, D# min, -5.87, 105" << endl << endl
		<< "Usual:" << endl;
	
	cout << "1 - In the end" << endl << "2 - Альтернатива" << 
		endl << "3 - Gangnam Style" << endl << "4 - Рок" << endl;
	IAnalization* a1 = new AnalizationByUserData("In the end", 
		"Альтернатива", "D# min", -5.87, 105);
	cout << endl << "1:" << endl;
	a1->getSong("In the end");
	cout << endl << "2:" << endl;
	a1->getSong("Альтернатива");
	cout << endl << "3:" << endl;
	a1->getSong("Gangnam Style");
	cout << endl << "4:" << endl;
	a1->getSong("Рок");

	cout << endl << "Proxy:" << endl;
	cout << "1 - In the end" << endl << "2 - Альтернатива" <<
		endl << "3 - Gangnam Style" << endl << "4 - Рок" << endl;
	IAnalization* pa1 = new ProxyAnalization("In the end", "Альтернатива", "D# min", -5.87, 105);
	cout << endl << "1:" << endl;
	pa1->getSong("In the end");
	cout << endl << "2:" << endl;
	pa1->getSong("Альтернатива");
	cout << endl << "3:" << endl;
	pa1->getSong("Gangnam Style");
	cout << endl << "4:" << endl;
	pa1->getSong("Рок");
}