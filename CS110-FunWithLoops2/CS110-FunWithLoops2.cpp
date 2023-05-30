#include <iostream>

using namespace std;

int main()
{
/*
Ask the user to enter a width (integer between 1 and 50).Using that entered value :
1. Print a line of "width" asterisks (*). That is, if the user enters 3, print 3 asterisks on one line : 
***

*/

	cout << "Problem 1. Print a line of 'width' asterisks(*)\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int numAsterisks = 3;
	cin >> numAsterisks;
	cout << endl;

	while (numAsterisks != 0)
	{
		cout << "*";
		numAsterisks--;
	}

	cout << endl << endl << "------------------------------" << endl << endl;

/*
2. Print a square box of * s with the given width (and height). That is, if the user enters 3, print :
***
***
***
* 
 */

	cout << "Problem 2. Print a square box of * s with the given width and height.\n\n";

	cout << "Enter an integer between 1 and 50: ";
	int numAsterisksSquare = 3;
	cin >> numAsterisksSquare;
	cout << endl;

	cout << endl << endl << "------------------------------" << endl << endl;

/*
3. Print a box with a hole in its center.That is, print a box as in #2 but with the single * in the center(or a * close to the center for boxes with an even width) replaced with a space.For example, if the user inputs 5, print:
*****
*****
** **
*****
*****


4. Print an equilateral triangle of * s with the given width.The right angle should be on the lower left.So, given a width of 4:
*
**
***
****


5. Print an equilateral triangle of * s with the given width.The right angle should be on the lower right.So, given a width of 4:
*
**
***
****


6. Print all the positive integers less than 100 that are divisible by the given number.Once you have that done, change your code to print those numbers 5 per line.


7. Print an equilateral triangle of * s with the given width.The right angle should be on the upper left.So, given a width of 4:
****
***
**
*


8. Print an equilateral triangle of * s with the given width.The right angle should be on the upper right.So, given a width of 4:
****
***
**
*


9. #3 above looks bad for boxes of even width.Fix this so that there is a hole of 4 spaces in the center of a large even - width box.For example, for size 6:
******
******
**  **
**  **
******
******


10. Print a 12x12(or any other size) multiplication table, properly spaced :
0 1 2 3 4 .. 11 12
1 1 2 3 4 11 12
2 2 4 6 8 22 24
3 3 6 9 12 33 36
. .
. .
. .
11 11 22 33 44 .. 121 132
12 12 24 36 48 .. 132 144
That is, each entry in the table takes up 3 characters and is right - aligned, with a space between entries on the same line.


When you are finished with the problems, make sure you demonstrate them to the teacher or student assistant.

Congratulations on taking another step in programming.
*/
}
