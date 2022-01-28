//
//  programmer.cpp
//  lab2
//
//  Created by Brian R. Hall on 1/3/14.
//  Copyright (c) 2014 Brian R. Hall. All rights reserved.
//

#include "programmer.h"

//implement functions here!

//returns the number of programmers - fills in the programmers array from the ifstream
int readProgrammers( ifstream& inputFile, Programmer programmers[], int maxProgrammers )
{
	//just a stub!
	return 0;
}

//returns the total of the lines field for all programmers
int calcTotalLines( Programmer programmers[], int numProgrammers )
{
	//just a stub!
	return 0;
}

//returns the average lines coded for all programmers as a float
float calcAverageLines( Programmer programmers[], int numProgrammers )
{
	//just a stub!
	return 0.0f;
}

//return a string containing info for a particular programmer
string generateProgrammerInfo( Programmer theProgrammer )
{
	//just a stub!
	return "";
}

//generate report for all programmers
//call calcTotalLines, calcAverageLines, and generateProgrammerInfo functions
void generateProgrammerReport( ostream& output, Programmer programmers[], int numProgrammers )
{
	//just a stub!
	output << "These are all the programmers:";
   
	for( int i = 0; i < numProgrammers; i++ )
	{
		output << "\nProgrammer info"; //this should output the programmer info for each programmer
	}
   
	output << "\nTotal lines = " << 0; //this should ouptut the total lines
	output << "\nAverage lines = " << 0.0f; //this should output the average lines
	output << endl;
}