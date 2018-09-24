// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.size() << " | Sum: " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.size() << " | Sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << " Size: " << pigs.size() << " | Sum: " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.size() << " | Sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << " Size: " << pigs.size() << " | Sum: " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.size() << " | Sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << " Size: " << pigs.size() << " | Sum: " << pigs.sum() << endl << endl;

	cows.insertAsLast(3.44);
	pigs.insertAsLast(7.19);
	horses.insertAsLast(4.90);
	cout << "cows list  :  " << cows << " Size: " << cows.size() << " | Sum: " << cows.sum() << endl;
	cout << "horses list:  " << horses << " Size: " << horses.size() << " | Sum: " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << " Size: " << pigs.size() << " | Sum: " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;
	system("pause");
	return 0;
}

