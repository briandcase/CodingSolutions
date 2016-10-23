/******************************/
/* */
/* This program takes in */
/* test scores from students */
/* and calculates the average.*/
/* The average is written to */
/* a new file. */
/******************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream inputFile; //File stream object
  ofstream outputFile; //File stream object

  // variable to hold the sum
  int sum = 0;
  int average = 0;
  int grade1 = 0, grade2 = 0, grade3 = 0, grade4 = 0;
  string name1;

  // Open the file.
  inputFile.open("scores.txt");

  //Open the output file.
  outputFile.open("averages.txt");

  // If the file successfully opened, process it.
  if (inputFile)
  {
    for (int i = 0; i <= 6; i++)
    {
      inputFile >> name1;
      outputFile << name1;
      inputFile >> grade1;
      inputFile >> grade2;
      inputFile >> grade3;
      inputFile >> grade4;

      // Calculate the average
      average = (grade1 + grade2 + grade3 + grade4) / 4;
      outputFile << " ";
      outputFile << average << endl;
    }

      // Close the file.
      inputFile.close();
      outputFile.close();
  }

  else
  {
    // Display an error message.
    cout << "Error opening the file.\n";
  }

return 0;
}
