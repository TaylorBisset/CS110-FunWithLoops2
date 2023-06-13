#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	Ask the user to enter a width (integer between 1 and 50). Using that entered value :
	1. Print a line of "width" asterisks (*). That is, if the user enters 3, print 3 asterisks on one line :
	* * *

	*/

	cout << "Problem 1. Print a line of 'width' asterisks(*)\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int numAsterisks = 3;
	cin >> numAsterisks;
	cout << endl;

	while (numAsterisks != 0)
	{
		cout << "* ";
		numAsterisks--;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	2. Print a square box of * s with the given width (and height). That is, if the user enters 3, print :
	* * *
	* * *
	* * *

	*/

	cout << "Problem 2. Print a square box of * s with the given width and height.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int numAstSq = 3;
	cin >> numAstSq;
	cout << endl;

	for (int numAstSqRow = 0; numAstSqRow < numAstSq; numAstSqRow++)
	{
		for (int numAstSqCol = 0; numAstSqCol < numAstSq; numAstSqCol++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	3. Print a box with a hole in its center. That is, print a box as in #2 but with the single * in the center
		(or a * close to the center for boxes with an even width) replaced with a space. For example, if the user inputs 5, print:
	* * * * *
	* * * * *
	* *   * *
	* * * * *
	* * * * *

	*/

	cout << "Problem 3. Print a square box of * s with the given width and height with a hole in the middle.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int numAstSqH = 4;
	cin >> numAstSqH;
	cout << endl;

	for (int numAstSqRowH = 0; numAstSqRowH < numAstSqH; numAstSqRowH++)
	{
		for (int numAstSqColH = 0; numAstSqColH < numAstSqH; numAstSqColH++)
		{
			if (numAstSqColH == (numAstSqH / 2) && numAstSqRowH == (numAstSqH / 2))
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}

		}
		cout << endl;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	4. Print an equilateral triangle of * s with the given width. The right angle should be on the lower left. So, given a width of 4:
	*
	* *
	* * *
	* * * *

	*/

	cout << "Problem 4. Print an equilateral triangle of * s with the given width. The right angle should be on the lower left.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int triangleLowerLeft = 4;
	cin >> triangleLowerLeft;
	cout << endl;

	for (int triangleLowerLeftRow = 0; triangleLowerLeftRow < triangleLowerLeft; triangleLowerLeftRow++)
	{
		for (int triangleLowerLeftCol = 0; triangleLowerLeftCol <= triangleLowerLeftRow; triangleLowerLeftCol++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	5. Print an equilateral triangle of * s with the given width. The right angle should be on the lower right.
		So, given a width of 4:
		  *
		* *
	  * * *
	* * * *

	*/

	cout << "Problem 5. Print an equilateral triangle of * s with the given width. The right angle should be on the lower right.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int triLR = 4;
	cin >> triLR;
	cout << endl;

	for (int triLRrow = 0; triLRrow < triLR; triLRrow++)
	{
		for (int triLRcol = 1; triLRcol <= triLR; triLRcol++)
		{
			if (triLRcol < (triLR - triLRrow))
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	6. Print all the positive integers less than 100 that are divisible by the given number. 
	Once you have that done, change your code to print those numbers 5 per line.
	*/

	cout << "Problem 6. Print all the positive integers less than 100 that are divisible by the given number.\n\n";

	cout << "Enter a number: ";
	int numDivide = 4;
	int posNum = 1;
	cin >> numDivide;
	cout << endl;
	
	/*

	use a counter to check when an integer prints.
	reset counter at 5 and go to next line.
	use this outside of the loop.

	redo this code snippet from scratch.

	*/

	int counter = 0;
	while (posNum <= 100)
	{
		if (posNum % numDivide == 0)
		{
			cout << setw(3) << posNum << " ";
			counter++;
		}
		if (counter == 5)
		{
			cout << endl;
			counter = 0;
		}
		posNum++;
	}

	cout << endl << endl << "------------------------------" << endl << endl; 

	/*
	7. Print an equilateral triangle of * s with the given width. The right angle should be on the upper left. 
		So, given a width of 4:
	* * * * 
	* * * 
	* * 
	* 

	*/

	cout << "7. Print an equilateral triangle of * s with the given width. The right angle should be on the upper left.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int triangleUL = 4;
	cin >> triangleUL;
	cout << endl;

	for (int triangleULRow = 0; triangleULRow < triangleUL; triangleULRow++)
	{
		for (int triangleULCol = 1; triangleULCol <= triangleUL; triangleULCol++)
		{
			if (triangleULCol <= (triangleUL - triangleULRow))
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	8. Print an equilateral triangle of * s with the given width. The right angle should be on the upper right. 
		So, given a width of 4:
	* * * * 
	  * * * 
		* * 
		  * 

	*/

	cout << "8. Print an equilateral triangle of * s with the given width. The right angle should be on the upper right.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int triangleUR = 4;
	cin >> triangleUR;
	cout << endl;

	for (int triangleURRow = triangleUR; triangleURRow <= triangleUR && triangleURRow != 0; triangleURRow--)
	{
		for (int triangleURCol = triangleUR; triangleURCol <= triangleUR && triangleURCol != 0; triangleURCol--)
		{
			if (triangleURCol >= (triangleURRow + 1))
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	9. #3 above looks bad for boxes of even width. Fix this so that there is a hole of 4 spaces in the center of a large even - width box. 
		For example, for size 6:
	* * * * * * 
	* * * * * * 
	* *     * * 
	* *     * * 
	* * * * * * 
	* * * * * * 

	*/

	cout << "Problem 9. Print a square box of * s with the given width and height with a hole in the middle.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int squareHole = 4;
	cin >> squareHole;
	cout << endl;

	/*
	try switch for problem 9.
	*/

	for (int squareHoleRow = 0; squareHoleRow < squareHole; squareHoleRow++)
	{
		for (int squareHoleCol = 0; squareHoleCol < squareHole; squareHoleCol++)
		{
			if (squareHoleCol == (squareHole / 2) && squareHoleRow == (squareHole / 2))
			{
				cout << "  ";
			}
			else if (squareHoleCol == ((squareHole / 2) - 1) && squareHoleRow == ((squareHole / 2) - 1))
			{
				cout << "  ";
			}
			else if (squareHoleCol == (squareHole / 2) && squareHoleRow == ((squareHole / 2) - 1))
			{
				cout << "  ";
			}
			else if (squareHoleCol == ((squareHole / 2) - 1) && squareHoleRow == (squareHole / 2))
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}

		}
		cout << endl;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	10. Print a 12x12 (or any other size) multiplication table, properly spaced :
	
	0 1 2 3 4 .. 11 12
	1 1 2 3 4 .. 11 12
	2 2 4 6 8 .. 22 24
	3 3 6 9 12 .. 33 36
	. .
	. .
	. .
	11 11 22 33 44 .. 121 132
	12 12 24 36 48 .. 132 144

	That is, each entry in the table takes up 3 characters and is right - aligned, with a space between entries on the same line.

	When you are finished with the problems, make sure you demonstrate them to the teacher or student assistant.
	*/

	cout << "Problem 10. Print a 12 x 12 (or any other size) multiplication table, properly spaced.\n\n";

	cout << "Enter an integer between 1 and 30: ";
	int timesTable = 12;
	cin >> timesTable;
	cout << endl;

	char horLn = 196, verLn = 179;
	for (int row = 0; row <= timesTable; row++)
	{
		for (int row = 0; row <= ((timesTable + 1) * 5); row++)
		{
			cout << horLn;
		}
		cout << endl;

		for (int column = 0; column <= timesTable; column++)
		{
			if (row == 0)				// Row header
			{
				cout << verLn << setw(4) << (row + column);
			}
			else if (row != 0)
			{
				if (column == 0)		// Column header
				{
					cout << verLn << setw(4) << (row + column);
				}
				else if (column != 0)	// Times tables
				{
					cout << verLn << setw(4) << (row * column);
				}
			}	
		}
		cout << verLn << endl;
	}
	// Repeat horizontal line for loop outside main loop to create ending horizontal line.
	for (int row = 0; row <= ((timesTable + 1) * 5); row++)
	{
		cout << horLn;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

	/*
	Congratulations on taking another step in programming.
	*/
}
