#pragma once
#include <iostream>
#include <string>
using namespace std;
class Library
{ private:
	string title;
	string genre;
	string actors;
	double rate;
	int duration;
	double speed;
	string fileName;
	string date;
public:
	Library();
	void setTitle(string tTitle);
	void setGenre(string tGenre);
	void setActors(string tActors);
	void setRate(double tRate);
	void setDuration(int tDuration);
	void setSpeed(double tSpeed);
	void setFileName(string tFileName);
	void setdate(string tDate);
	string getTitle();
	string getGenre();
	string getActors();
	double getRate();
	int getDuration();
	double getSpeed();
	string getFileName();
	string getDate();
	friend ostream& operator <<(ostream& os, const Library &library)
	{
		os << "���������: " << library.title << endl;
		os << "����: " << library.genre << endl;
		os << "������: " << library.actors << endl;
		os << "�������: " << library.rate << endl;
		os << "���������: " << library.duration << " ��." << endl;
		os << "�������� ����������: " << library.speed << endl;
		os << "����� �����: " << library.fileName << endl;
		os << "����: " << library.date << endl;
		return os;
	}
	friend istream& operator >> (istream& is, Library& library)
	{
		cout << "������ ��������� �����: ";
		getline(is, library.title);
		cout << "������ ���� �����: ";
		getline(is, library.genre);
		cout << "������ ������ ����� ����� ����: ";
		getline(is, library.actors);
		cout << "������ ������� ������: ";
			while (!(is >> library.rate) || library.rate < 0.0 || library.rate > 10)
			{
				is.clear();
				while (is.get() != '\n');
				cout << "������ ��������� ������� ������! ������� �� ���� ���� ����� 0 ��� ����� 10!" <<endl ;
				cout << "������ ������� ������: ";
			}
		cout << "������ ��������� ������ � ��������: ";
		while (!(is >> library.duration) || library.duration <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "������ ��������� ��������� ������! ��������� �� ���� ���� ����� ��� ���� 0!" <<endl;
			cout << "������ ��������� ������ � ��������: ";
		}
		cout << "������ �������� ���������� ������: ";
		while (!(is >> library.speed) || library.speed <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "������ �������� ���������� ������! �������� ���������� �� ���� ���� ����� ��� ���� 0!" << endl;
			cout << "������ �������� ���������� ������: ";
		}
		cin.get();
		cout << "������ ����� �����: ";
		getline(is, library.fileName);
		cout << "������ ���� ������. \n�������: 01/05/2005 \n����: ";
		getline(is, library.date);
		return is;
	}
	~Library();
};

