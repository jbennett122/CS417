/*
 * matrixBrackets.cpp
 *
 *  Created on: Jan 16, 2015
 *      Author: Justin
 */

//============================================================================
// Name        : Matrix.cpp
// Author      : Justin Bennett
// Version     :
// Copyright   : Your copyright notice...you notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>     /* srand, rand */
#include <iomanip>
#include <fstream>
#include <istream>
#include <string>


using namespace std;

int brackets(int argc,char* argv[]) {

	//double pointer pointer
	 double **x;

	//rows and columns of the matrix
	 int rows,cols,nums;
	 char matrix;
	 string test;
	//stream variable
	 ifstream fs;

	 //int  RAND_MAX=456;

	 //is the file found?
	 if(argc != 2){
	 		cout<<"File not found"<<endl;
	 		return -1;
	 	}

	//file already open?
	// cerr<<fs.is_open()<<endl;

	//take argument and open file
	 fs.open(argv[1]);



	getline(fs,test);

	cout<<test<<endl;


	fs>>matrix>>rows>>cols;

	cout<<"rows"<<rows<<endl;
	cout<<"cols"<<cols<<endl;



//create matrix and assign   values
	x = new double *[rows];
	for (int i=0; i < rows; i++)
	{
		x[i]=new double [cols];

		for(int j=0;j<cols;j++){
			fs>>nums;

			x[i][j]=nums;
			//semi random number gen?
			x[i][j]=rand()%100;

		}
	}

	for (int i=0; i < rows; i++)
		{
			for(int j=0;j<cols;j++){

			  cout<<"["<<x[i][j]<<"] ";
			}
		cout<<endl;
		}


	return 0;
}


