#ifndef IOSTREAM_H
#define IOSTEAM_H
#include <iostream>
#endif
#include "arrayListType.h"

class orderedArrayListType : public arrayListType
{
public:
	/*Inserts an item at a specific location in the list.*/
	void insertAt(int location, int insertItem);
	/*Inserts an item at the end of the list.*/
	void insertEnd(int insertItem);
	/*Replaces an item at a specific location with an other item.*/
	void replaceAt(int location, int repItem);
	/*Conducts a sequential search for an item.*/
	int seqSearch(int searchItem) const;
	/*Inserts an item.*/
	void insert(int insertItem);
	/*Removes an item.*/
	void remove(int removeItem);
	/*Constructor*/
	int min (int last);
	orderedArrayListType(int size = 100);
};