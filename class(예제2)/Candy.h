#pragma once
#ifndef __SNACK_H__
#define __SNACK_H__
#include<iostream>

using std::string;
using std::cout; 
#include"Snack.h"

string Candy::flavor = " ";

class Candy : public :Snack {
	static string flavor;
public:
	Candy(string flavor) :Snack() {
		
	}

	void complete() {
		
	}

};




#endif