#pragma once

class IDataContainer
{
public:
	virtual int size() = 0;
	virtual int maxSize() = 0;
	virtual bool isEmpty() = 0;
	virtual void beginIter() = 0;
	virtual void endIter() = 0;
	virtual void rBeginIter() = 0;
	virtual void rEndIter() = 0;
	virtual void UI() = 0; // remove
};