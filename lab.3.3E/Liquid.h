#pragma once
#include "Object.h"
#include<iostream>
using namespace std;

class Liquid :
    public Object
{
private:
	string name;
	double density;
public:
	string getName() const { return name; }
	double getDensity() const { return density; }

	void setName(string name) { this->name = name; }
	void setDensity(double density) { this->density = density; }


	Liquid() :name(""), density(0) {};
	Liquid(const string name);
	Liquid(const double density);
	Liquid(const string name, const double density);
	Liquid(const Liquid&);

	operator string () const;
	friend ostream& operator << (ostream& out, const Liquid& q);
	friend istream& operator >> (istream& in, Liquid& q);

	void changeDensity();

	~Liquid(void) {};
};

