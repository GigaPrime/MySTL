#include "SerialContainer.h"

int SerialContainer::getSize()
{
	return containerSize;
}

bool SerialContainer::isEmpty()
{
	return isContainerEmpty;
}

void SerialContainer::setSize(int s)
{
	containerSize = s;
}