#include<iostream>
#include"book.h"
using namespace std;


Book::Book()
{
	this.id=101;
	this.name="Kavita";
	this.price=250.0;
};
Book::Book(int id, string name, double price)

{
	this.id=id;
	this.name=name;
	this.price=price;
};


