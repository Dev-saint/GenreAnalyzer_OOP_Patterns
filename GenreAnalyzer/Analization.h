#pragma once
#include <iostream>
using namespace std;

class IAnalization
{
public:
	virtual void getSong(string) = 0;
};

class AnalizationByUserData : public IAnalization
{
public:
	string song_name;	//название композиции
	string song_genre;		//жанр композиции
	string tone;		//тональность
	double loudness;	//громкость
	int bpm;			//темп
	void getSong(string check) override
	{
		if (check == song_genre)
			cout << "Название композиции: " << song_name << endl << "Тональность: " << tone << endl
			<< "Громкость (Дб): " << loudness << endl << "Темп (удары в секунду): " << bpm << endl;
		else
			if (check == song_name)
				cout << "Жанр композиции: " << song_genre << endl << "Тональность: " << tone << endl
				<< "Громкость (Дб): " << loudness << endl << "Темп (удары в секунду): " << bpm << endl;
			else cout << "Не анализировалась!" << endl;
	}
	AnalizationByUserData(string name, string genre, string tonality, double loud, int beats_per_minute) 
	{
		song_name = name; song_genre = genre; tone = tonality; loudness = loud; bpm = beats_per_minute;
	}
};

class ProxyAnalization : public IAnalization
{
private:
	AnalizationByUserData* prox;
	void log() { cout << "It's proxy!" << endl; }
public:
	void getSong(string check) override
	{
		log();
		if (check == prox->song_name)
			cout << "Жанр композиции: " << prox->song_genre << endl << "Тональность: " << prox->tone << endl
			<< "Громкость (Дб): " << prox->loudness << endl << "Темп (удары в секунду): " << prox->bpm << endl;
		else cout << "Не анализировалась!" << endl;
	}
	ProxyAnalization(string name, string genre, string tonality, double loud, int beats_per_minute)
	{
		prox = new AnalizationByUserData(name, genre, tonality, loud, beats_per_minute);
	}
	~ProxyAnalization() { delete prox; }
};