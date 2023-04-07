#include<iostream>
#include"Snack.h"

class Candy : public Snack {
	static string flavor;
public:
	Candy(string flavor) :Snack() {
		this->flavor = flavor;
	}

	void complete() {
		cout << flavor << "»çÅÁ\n";
	}

};