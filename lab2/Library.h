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
		os << "Заголовок: " << library.title << endl;
		os << "Тема: " << library.genre << endl;
		os << "Актори: " << library.actors << endl;
		os << "Рейтинг: " << library.rate << endl;
		os << "Тривалість: " << library.duration << " хв." << endl;
		os << "Швидкість відтворення: " << library.speed << endl;
		os << "Назва файлу: " << library.fileName << endl;
		os << "Дата: " << library.date << endl;
		return os;
	}
	friend istream& operator >> (istream& is, Library& library)
	{
		cout << "Введіть заголовок фільмі: ";
		getline(is, library.title);
		cout << "Введіть тему фільмі: ";
		getline(is, library.genre);
		cout << "Введіть Акторів фільмі через кому: ";
		getline(is, library.actors);
		cout << "Введіть рейтинг фільму: ";
			while (!(is >> library.rate) || library.rate < 0.0 || library.rate > 10)
			{
				is.clear();
				while (is.get() != '\n');
				cout << "Введіть правильно рейтинг фільму! Рейтинг не може бути менше 0 або більше 10!" <<endl ;
				cout << "Введіть рейтинг фільму: ";
			}
		cout << "Введіть тривалість фільму в хвилинах: ";
		while (!(is >> library.duration) || library.duration <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "Введіть правильно тривалість фільму! Тривалість не може бути менше або рівне 0!" <<endl;
			cout << "Введіть тривалість фільму в хвилинах: ";
		}
		cout << "Введіть швидкість відтворення фільму: ";
		while (!(is >> library.speed) || library.speed <= 0)
		{
			is.clear();
			while (is.get() != '\n');
			cout << "Введіть швидкість відтворення фільму! Швидкість відтворення не може бути менше або рівне 0!" << endl;
			cout << "Введіть швидкість відтворення фільму: ";
		}
		cin.get();
		cout << "Введіть назву файла: ";
		getline(is, library.fileName);
		cout << "Введіть дату фільма. \nПриклад: 01/05/2005 \nДата: ";
		getline(is, library.date);
		return is;
	}
	~Library();
};

