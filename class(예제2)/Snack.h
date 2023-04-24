#pragma once
#ifndef __SNACK_H__
#define __SNACK_H__
#include<iostream>
using std::string;
using std::cout;

class Snack {
protected:
	string flavor;
	string share;
public:
	Snack() {

	}
	static void info() { }
};

#endif // !__SNACK_H__

