#include<iostream>
#include"Snack.h"

class Chocolate :public Snack {
	static string share;
public:
	Chocolate(string share) :Snack() {
		this->share = share;

	}
	void complete() {
		cout << share << "ÃÊÄÝ¸´\n";
	}

};