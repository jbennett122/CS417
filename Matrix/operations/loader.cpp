/*
 * loader.cpp
 *
 *  Created on: Jan 27, 2015
 *      Author: Justin
 */

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>     /* srand, rand */
#include <iomanip>
#include <fstream>
#include <istream>
#include <string>
#include "../operations/addMatrix.h"


using namespace std;

double loader(int argc,char* argv[]){
	// brackets(argc,argv);

	//double pointer pointer
	 double **A;
	 double **B;
	 double **X;
	//rows and columns of the matrix
	 int n,m,nums;
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
	// cerr<<fs.is_open()<<endl;

	//take argument and open file
	 fs.open(argv[2]);

	//should be open now
	// cerr<<fs.is_open()<<endl;

	   if (!fs.is_open())
	   {
	     cout << "Operation not successfully performed\n";
	     fs.close();
	   }

	for(int i=0;i<argc;i++)
		 		printf("Argument %d: %s\n", (i), argv[i]);



	getline(fs,test);

	//cout<<test<<endl;

	//basic matrix test
		//rows=3;
		//cols=3;

	fs.clear();
	char c;

		fs>>c;
		cout<<"Matrix "<<c<<endl;


	fs>>n>>m;

	//cout<<"rows"<<rows<<endl;
	//cout<<"cols"<<cols<<endl;



//create matrix and assign   values
	A = new double *[n];
	for (int i=0; i < n; i++)
	{
		A[i]=new double [m];

		for(int j=0;j<m;j++){
			fs>>nums;

			A[i][j]=nums;

			//x[i][j]=rand()%100;

		}
	}

	for (int i=0; i < n; i++)
		{
		cout<<"|";
			for(int j=0;j<m;j++){

			  cout<<" "<<setw(2)<<A[i][j]<<" ";
			}
		cout<<"|"<<endl;
		}

	//cout << "Lets make some matrices!" << endl; // prints Lets make some matrices!



return **A;

}
