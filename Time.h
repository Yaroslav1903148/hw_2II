#pragma once
#include <iostream>
using namespace std;

class Time
{
	int hour;
	int minutes;
	int seconds;
	bool format;

public:
	Time(); // Current local time
	Time(int hour, int minutes, int seconds, bool format = true);
	Time(const Time& obj); 
	Time& operator = (const Time& obj); 

	void setHour(int hour);
	int getHour()const;
	void setMinutes(int minutes);
	int getMinutes()const;
	void setSeconds(int seconds);
	int getSeconds()const;
	void setFormat(bool format);
	bool getFormat()const;

	bool valid()const; //time check
	void tickTime(); //every tick add one second
	void untickTime(); //every tick remove one second
	void showTime()const; //show time by the format


	//--------- Comparison operators ---------
	bool operator == (const Time& obj)const&;
	bool operator != (const Time& obj)const&;
	bool operator > (const Time& obj)const&;
	bool operator < (const Time& obj)const&;
	bool operator >= (const Time& obj)const&;
	bool operator <= (const Time& obj)const&;

	//--------- Assignment operators ---------	
	Time& operator += (float s);	// add seconds
	Time& operator -= (float s);
	Time& operator += (int m);		// add minutes
	Time& operator -= (int m);
	Time& operator += (long h);	// add hours
	Time& operator -= (long h);



	Time operator + (float s)const&;	// add seconds
	Time operator - (float s)const&;
	Time operator + (int m)const&; // add minutes
	Time operator - (int m)const&;
	Time operator + (long h)const&; // add hours
	Time operator - (long h)const&;



	// рання реалізація Тема 24

	Time& operator -- ();
	Time operator -- (int);
	Time& operator ++ ();
	Time operator ++ (int);

	friend Time operator + (int seconds, const Time& a);
	friend Time operator - (int seconds, const Time& a);

	friend Time operator + (float minutes, const Time& a);
	friend Time operator - (float minutes, const Time& a);

	friend Time operator + (long hours, const Time& a);
	friend Time operator - (long hours, const Time& a);


	friend ostream& operator << (ostream& os, const Time& t);
	friend istream& operator >> (istream& is, Time& t);


};