
//Data:  18 42 78 22 42 5 42 57 

#include <iostream>
#include "orderedArrayListType.h"

using namespace std;

int main() 
{
    orderedArrayListType intList(25);

    int number; 

    cout << "Enter 8 integers: ";

    for (int count = 0; count < 8; count++) 
    {
        cin >> number;
        intList.insertEnd(number);
    }

    cout << endl; 
    cout << "intList: "; 
    intList.print(); 
    cout << endl; 

    cout << "The smallest number in intList: " 
         << intList.min(8) << endl; 
	system("pause");
	return 0; 
}
