/*
Author:       Benjie
Class:        CSI-240-03
Assignment:   Lab 1-2
Date Assigned:1/17/2022
Due Date:     1/28/2022 14:30
Description:
A brief description of the purpose of the program.
Certification of Authenticity:
    I certify that this is entirely my own work, except where I have given
    fully-documented references to the work of others. I understand the
    definition and consequences of plagiarism and acknowledge that the assessor
    of this assignment may, for the purpose of assessing this assignment:
        - Reproduce this assignment and provide a copy to another member of
academic staff; and/or
        - Communicate a copy of this assignment to a plagiarism checking
          service (which may then retain a copy of this assignment on its
          database for the purpose of future plagiarism checking)
*/

#include "programmer.h"
#include <sstream>
//implement functions here!

//returns the number of programmers - fills in the programmers array from the ifstream
int readProgrammers( ifstream& inputFile, Programmer programmers[], int maxProgrammers )
{
	int i{0};
	if( inputFile.good() )
		{

			while( !inputFile.eof() &&i<maxProgrammers)
			{
				Programmer p;
				inputFile >> p.programmer_id >> p.name >> p.lines;
				programmers[i] = p;
				i++;
			}
		}
	return i;
}

//returns the total of the lines field for all programmers
int calcTotalLines( Programmer programmers[], int numProgrammers )
{
	int total{0};

	for( int i = 0; i < numProgrammers; i++ )
		total+=programmers[i].lines;
	return total;
}

//returns the average lines coded for all programmers as a float
float calcAverageLines( Programmer programmers[], int numProgrammers )
{
	return calcTotalLines(programmers,numProgrammers)/numProgrammers;
}

//return a string containing info for a particular programmer
string generateProgrammerInfo( Programmer theProgrammer )
{
	stringstream buffer;
	buffer << theProgrammer.programmer_id << " " << theProgrammer.name << " " << theProgrammer.lines << endl;
	return buffer.str();
}

//generate report for all programmers
//call calcTotalLines, calcAverageLines, and generateProgrammerInfo functions
void generateProgrammerReport( ostream& output, Programmer programmers[], int numProgrammers )
{
	output << "These are all the programmers:" << endl;
   
	for( int i = 0; i < numProgrammers; i++ )
	{
		 output << generateProgrammerInfo(programmers[i]);//this should output the programmer info for each programmer
	}
   
	output << "Total lines = " << calcTotalLines(programmers,numProgrammers); //this should ouptut the total lines
	output << "\nAverage lines = " << calcAverageLines(programmers,numProgrammers); //this should output the average lines
	output << endl;
}
