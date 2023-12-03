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
	string song_name;	//�������� ����������
	string song_genre;		//���� ����������
	string tone;		//�����������
	double loudness;	//���������
	int bpm;			//����
	void getSong(string check) override
	{
		if (check == song_genre)
			cout << "�������� ����������: " << song_name << endl << "�����������: " << tone << endl
			<< "��������� (��): " << loudness << endl << "���� (����� � �������): " << bpm << endl;
		else
			if (check == song_name)
				cout << "���� ����������: " << song_genre << endl << "�����������: " << tone << endl
				<< "��������� (��): " << loudness << endl << "���� (����� � �������): " << bpm << endl;
			else cout << "�� ���������������!" << endl;
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
			cout << "���� ����������: " << prox->song_genre << endl << "�����������: " << prox->tone << endl
			<< "��������� (��): " << prox->loudness << endl << "���� (����� � �������): " << prox->bpm << endl;
		else cout << "�� ���������������!" << endl;
	}
	ProxyAnalization(string name, string genre, string tonality, double loud, int beats_per_minute)
	{
		prox = new AnalizationByUserData(name, genre, tonality, loud, beats_per_minute);
	}
	~ProxyAnalization() { delete prox; }
};