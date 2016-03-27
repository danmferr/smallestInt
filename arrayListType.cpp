#include "arrayListType.h"

bool arrayListType::isEmpty() const
{
	return (length == 0);
}

bool arrayListType::isFull() const
{
	return (length == maxSize);
}

int arrayListType::listSize() const
{
	return length;
}

int arrayListType::maxListSize() const
{
	return maxSize;
}

void arrayListType::print() const
{
	for (int i = 0; i < length; i++)
	{
		std::cout << list[i] << " ";
	}
	std::cout << std::endl;
}
void arrayListType::min(int minimum) const
{
	int min;
	for (int loc =1; loc<length ; loc++)
		if (list[loc]< length)
			minimum=list[loc];
}
bool arrayListType::isItemAtEqual(int location, int item) const
{
	if (location < 0 || location >= length)
	{
		std::cout << "The location of the item to be removed "
			<< "is out of range." << std::endl;
		return false;
	}
	else
		return (list[location] == item);
}

void arrayListType::removeAt(int location)
{
	if (location < 0 || location >= length)
	{
		std::cout << "The location of the item to be removed "
			<< "is out of range." << std::endl;
	}
	else
	{
		for (int i = location; i < length - 1; i++)
		{
			list[i] = list[i + 1];
		}
		length--;
	}
}

void arrayListType::retrieveAt(int location, int& retItem) const
{
	if (location < 0 || location >= length)
	{
		std::cout << "The location of the item to be retrieved is "
			<< "out of range" << std::endl;
	}
	else
	{
		retItem = list[location];
	}
}

void arrayListType::clearList()
{
	length = 0;
}

arrayListType::arrayListType(int size)
{
	if (size <= 0)
	{
		std::cout << "The array size must be positive. Creating "
			<< "an array of the size 100." << std::endl;
		maxSize = 100;
	}
	else
	{
		maxSize = size;
	}
	length = 0;
	list = new int[maxSize];
}

arrayListType::~arrayListType()
{
	delete[] list;
}

arrayListType::arrayListType(const arrayListType& otherList)
{
	maxSize = otherList.maxSize;
	length = otherList.length;
	list = new int[maxSize];
	for (int j = 0; j < length; j++)
	{
		list[j] = otherList.list[j];
	}
}