#pragma once
#ifndef __STUDENT_H__
#define __STUDENT_H__
#include<iostream>
using std::string;
using std::cout;
using std::endl;
#include "Person.h"

class Student : public Person {
public:
	Student(string name);
};


#endif // !__STUDENT_H__

