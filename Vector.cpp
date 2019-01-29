#include "vector.h"

template<typename T>
T *Vector<T>::increaseSize(int s)
{
	T *newVector = new T[s * s];
	setSize((s * s));
	return newVector;
}

template<typename T>
void Vector<T>::operator=(const Vector &v)
{
	if (v == this)
		return *this;
	else
	{
		for (int i = 0; i < containerSize; i++)
			containerPtr[i] = v.containerPtr[i];
	}
	return v.containerPtr;
}

template <typename T>
Vector<T>::Vector()
{
	containerSize = 1;
	containerPtr = new T[containerSize];
	isEmpty = true;
}

template <typename T>
Vector<T>::Vector(int s)
{
	containerSize = s;
	containerPtr = new T[containerSize];
	isEmpty = true;
}

template<typename T>
Vector<T>::Vector(Vector &vector)
{
	containerSize = vector.containerSize;
	containerPtr = new T[containerSize];
	for (int i = 0; i < containerSize; i++)
	{
		containerPtr[i] = vector.containerPtr[i];
	}
	isEmpty = vector.isEmpty;
}

template<typename T>
void Vector<T>::pushBask(T t)
{
	if (isEmpty)
	{
		containerPtr = t;
		isEmpty = false;
	}
	else if(!isEmpty && containerPtr < getSize() - 1)
	{
		containerPtr++;
		containerPtr = t;
	}
	else if (!isEmpty && containerPtr == getSize() - 1)
	{
		increaseSize(getSize()) = t;
	}
}

template<typename T>
void Vector<T>::UI()
{
	if (SerialContainer.isEmpty)
		cout << "Vector is empty." << endl;
	else
		for (int i = 0; i < SerialContainer.getSize(); i++)
		{
			cout << containerPtr++ << " ";
		}
}

template <typename T>
Vector<T>::~Vector() 
{
	delete[] containerPtr;
}