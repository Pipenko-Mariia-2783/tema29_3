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
	void setSize(int size);
	void setPrice(float price);

	bool operator ==(const Overcoat& obj)const&;
	bool operator !=(const Overcoat& obj)const&;
	bool operator >(const Overcoat& obj)const&;
	bool operator <(const Overcoat& obj)const&;
	bool operator >=(const Overcoat& obj)const&;
	bool operator <=(const Overcoat& obj)const&;

	Overcoat& operator -- ();
	Overcoat& operator -- (int);
	Overcoat& operator ++ ();
	Overcoat& operator ++ (int);


	friend ostream& operator<<(ostream& out, const Overcoat& obj);
	friend istream& operator>>(istream& in, Overcoat& obj);
};

