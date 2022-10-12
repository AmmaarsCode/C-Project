#include <iomanip>  /* Use setprecision */
#include <iostream> /* Use cout */
#include <string>   /* Use strings */
#include <fstream>
using namespace std;

// Create your struct here

int main(int argumentCount, char *argumentList[]) {
  /* Check for enough arguments */
  if (argumentCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS" << endl;
    cout << "Expected form: " << argumentList[0] << " ???" << endl;
    return 1; /* Exit with error code 1 */
  }

  // PART 1.
  // *  ARRAY OBJECT to create an array of Course objects, of size 4.
  // *  a string variable to store the filename, load in the value from
  // argumentList[1].
struct Course
{
 string name;
 float grade;
};
  
array<Course, 4> courses;
string filename = argumentList[1];
ifstream input( filename );

  // PART 2. 
  // *  INPUT FILE STREAM object, try to open the filename passed in.
  // * Read in from the input file in this order:
  // Course 0's name
  // Course 0's grade
  // Course 1's name
  // Course 1's grade
  // Course 2's name
  // Course 2's grade
  // Course 3's name

input >> courses[0].name;
input >> courses[0].grade;
  
input >> courses[1].name;
input >> courses[1].grade;
 
input >> courses[2].name;
input >> courses[2].grade;

input >> courses[3].name;
input >> courses[3].grade;
  

  // PART 3:
  // *  a float variable to store the AVERAGE. Average all the grades by
  // adding together each grade, then dividing by 4.
float result = courses[0].grade
   + courses[1].grade + courses[2].grade + 
  courses[3].grade ;

float gpa = result / 4;


  
  // PART 4:
  // *cout, left, and setw commands to display each of the COURSE names and
  // grades.
  // * GPA at the end.

  cout << left
 << setw( 10 ) << "COURSE"
 << setw( 10 ) << "GRADE"
 << endl << string( 20, '-' ) << endl;

  cout
 << setw( 10 ) << courses[0].name
 << setw( 10 ) << courses[0].grade << endl;

  cout
 << setw( 10 ) << courses[1].name
 << setw( 10 ) << courses[1].grade << endl;

  cout
 << setw( 10 ) << courses[2].name
 << setw( 10 ) << courses[2].grade << endl;

  cout
 << setw( 10 ) << courses[3].name
 << setw( 10 ) << courses[3].grade << endl;

  cout << endl << "GPA: " << gpa << endl;

  return 0;
}

/*
Expected output:

./program2exe 
GRADE REPORT
COURSE    GRADE
--------------------
CS134    4
CS200    3.5
CS210    4
ASL120   3

GPA: 3.625
*/
