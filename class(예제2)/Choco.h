#pragma once
#ifdef __CHOCO_H__
#define __CHOCO_H__
#include<iostream>
#include"Snack.h"
using std::string;
using std::cout;

string Chocolate::share = " ";

class Chocolate :public Snack {
	static string share;
public:
	Chocolate(string share) :Snack() {
		

	}
	void complete() {
		
	}

};


#endif // __CHOCO_H__

