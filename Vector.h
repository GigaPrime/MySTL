#pragma once
#include "SerialContainer.h"

template<typename T>
class Vector : public SerialContainer
{
private:
	T *containerPtr;
	T *increaseSize(int s);
	void operator=(const Vector &v);
	
public:
	Vector();
	Vector(int s);
	Vector(Vector& vector);
	
	void pushBask(T t);
	T popBack();
	
	void UI();

	~Vector();
};
