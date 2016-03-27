#include "orderedArrayListType.h"

void orderedArrayListType::insertAt(int location, int insertItem)
{
	if (!(location > (maxSize - 1)))
	{
		list[location] = insertItem;
		++length;
	}
	else
	{
		std::cout << "Cannot insert at location " << location << "." << std::endl;
	}
}

void orderedArrayListType::insertEnd(int insertItem)
{
	if (!(length == 0))
	{
		//If the length of the list is greater than zero, then we insert the item at the very end.
		list[length - 1] = insertItem;
	}
	else
	{
		list[length++] = insertItem; //If the list is empty an insert at the end creates the first element.
	}
}

void orderedArrayListType::replaceAt(int location, int repItem)
{
	if ((location < (maxSize - 1)) && (location < length) && (location > 0))
	{
		list[location] = repItem;
	}
	else
	{
		std::cout << "Index out of Bounds: A replace could not occur." << std::endl;
	}
}

int orderedArrayListType::seqSearch(int searchItem) const
{
	for (int searchIndex = 0; searchIndex < length; ++searchIndex)
	{
		if (list[searchIndex] == searchItem)
		{
			return searchIndex;
		}
	}
	return -1; //We return -1 if the item is not present in the list.
}

void orderedArrayListType::insert(int insertItem)
{
	if (length == 0) //When the list is empty we simply insert at the first position and adjust length.
		list[length++] = insertItem;
	else if (length == maxSize)
		std::cout << "Cannot insert in a full list." << std::endl;
	else
	{
		//Find the location where the item should be inserted.
		int loc;
		bool found = false;

		for (loc = 0; loc < length; loc++)
		{
			if (list[loc] >= insertItem)
			{
				found = true;
				break;
			}
		}

		//Shift list elements upwards.
		for (int i = length; i > loc; i--)
			list[i] = list[i - 1]; 
		//Insert item and adjust length.
		list[loc] = insertItem; 
		length++; 
	}
}

void orderedArrayListType::remove(int removeItem)
{
	if (length == 0) //Empty lists have no elements to remove.
		std::cout << "An item cannot be removed from an empty list." << std::endl;
	else
	{
		bool itemExists = false;
		/*Finding the index of the item.*/
		for (int listIndex = 0; listIndex < maxSize; ++listIndex)
		{
			/*If the item exists we shift all of the elements after it
			downwards, overwriting the item in the process.*/
			if (list[listIndex] == removeItem)
			{
				itemExists = true;
				for (int shiftIndex = listIndex; shiftIndex < length; ++shiftIndex)
				{
					list[shiftIndex] = list[shiftIndex + 1];
				}
				--length;
				break;
			}
		}
		if (!itemExists)
		{
			std::cout << "The item does not exist and therefore cannot be removed. Try adding something next time." << std::endl;
		}
	}
}

orderedArrayListType::orderedArrayListType(int size) : arrayListType(size)
{

}