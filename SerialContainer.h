#pragma once
#include "IDataContainer.h";
class SerialContainer : public IDataContainer
{
private:
	int containerSize;
	bool isContainerEmpty;

	void setSize(int s);

public:
	int getSize();
	bool isEmpty();
	
	virtual void pushBask() = 0 {};
	virtual void popBack() = 0 {};
	virtual ~SerialContainer() = 0 {}
};

// redefine all pure virtual functions!!!