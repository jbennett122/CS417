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

int main(int argc,char* argv[]) {

	//double pointer pointer
	 double **x;

	//rows and columns of the matrix
	 int rows,cols,nums;
	 char matrix;
	 string test;
	//stream variable
	 ifstream fs;

	 //is the file found?
	 if(argc != 2){
	 		cout<<"File not found"<<endl;
	 		return -1;
	 	}

	//file already open?
	 cerr<<fs.is_open()<<endl;

	//take argument and open file
	 fs.open(argv[1]);

	//should be open now
	 cerr<<fs.is_open()<<endl;

	   if (!fs.is_open())
	   {
	     cout << "Operation not successfully performed\n";
	     fs.close();
	   }

	for(int i=0;i<argc;i++)
		 		printf("Argument %d: %s\n", (i), argv[i]);



	getline(fs,test);

	cout<<test<<endl;

	//basic matrix test
		//rows=3;
		//cols=3;


	/*char c;
	while(fs){
		fs.get(c);
		cout<<c<" ";
	}*/

	fs>>matrix>>rows>>cols;

	cout<<"rows"<<rows<<endl;
	cout<<"cols"<<cols<<endl;

int num;

//create matrix and assign random values
	x = new double *[rows];
	for (int i=0; i < rows; i++)
	{
		x[i]=new double [cols];

		for(int j=0;j<cols;j++){
			fs>>num;

			x[i][j]=num;

			//x[i][j]=rand()%100;

		}
	}

	for (int i=0; i < rows; i++)
		{
			for(int j=0;j<cols;j++){

			  cout<<"["<<x[i][j]<<"] ";
			}
		cout<<endl;
		}

	cout << "Lets make some matrices!" << endl; // prints Lets make some matrices!


	return 0;
}
