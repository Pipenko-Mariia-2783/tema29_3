#pragma once
#include <iostream>
#include <string>
using namespace std;
class Overcoat
{
protected:
	string name;
	string type;
	int size;
	float price;
	static int count;
public:
	Overcoat();
	Overcoat(string name,string type,int size,float price);

	string getName()const;
	string getType()const;
	int getSize()const;
	float getPrice()const;

	void setName(string name);
	void setType(string type);
	void seySize(int size);

};

