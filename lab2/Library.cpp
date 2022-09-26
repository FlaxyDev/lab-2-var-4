#include "Library.h"
Library::Library()
{
	title = "-";
	genre = "-";
	actors = "-";
	rate = 0.0;
	duration = 0;
	speed = 0.0;
	fileName = "-";
	date = "00/00/0000";
}
void Library::setTitle(string tTitle)
{
	title = tTitle;
}
void Library::setGenre(string tGenre)
{
	genre = tGenre;
}
void Library::setActors(string tActors)
{
	actors = tActors;
}
void Library::setRate(double tRate)
{
	if (tRate < 0 || tRate > 10)
	{
		cout << "–ейтинг не може буди меньше нул€ або б≥льше 10!" <<endl;
	}
	else 
	{
		rate = tRate;
	}
}
void Library::setDuration(int tDuration)
{
	if (tDuration <= 0)
	{
		cout << "“ривал≥сть не може бути менше або р≥вне нулю!" <<endl;
	}
	else
	{
		duration = tDuration;
	}
}
void Library::setSpeed(double tSpeed)
{
	if (tSpeed <= 0.0)
	{
		cout << "Ўвидк≥сть не може бути менше або р≥вне нулю!" << endl;
	}
	else
	{
		speed = tSpeed;
	}
}
void Library::setFileName(string tFileName)
{
	fileName = tFileName;
}
void Library::setdate(string tDate)
{
	date = tDate;
}
string Library::getTitle()
{
	return title;
}
string Library::getGenre()
{
	return genre;
}
string Library::getActors()
{
	return actors;
}
double Library::getRate()
{
	return rate;
}
int Library::getDuration()
{
	return duration;
}
double Library::getSpeed()
{
	return speed;
}
string Library::getFileName()
{
	return fileName;
}
string Library::getDate()
{
	return date;
}
Library::~Library()
{

}