/*
 * addMatrix.cpp
 *
 *  Created on: Jan 26, 2015
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

using namespace std;


double pass(double **A,double **B,double **X,int n,int m){


//cerr<<"test"<<n<<m<<endl<<endl<<endl;


for (int i=0; i < n; i++)
		{
		cout<<"|";
			for(int j=0;j<m;j++){

			  cout<<" "<<setw(2)<<A[i][j]<<" ";
			}
		cout<<"|"<<endl;
		}


//cerr<<"test"<<n<<m<<endl<<endl<<endl;

for (int i=0; i < n; i++)
			{
			cout<<"|";
				for(int j=0;j<m;j++){

				  cout<<" "<<setw(2)<<B[i][j]<<" ";
				}
			cout<<"|"<<endl;
			}



//cerr<<"test"<<n<<m<<endl<<endl<<endl;

for (int i=0; i < n; i++)
		{
		cout<<"|";
			for(int j=0;j<m;j++){

			  cout<<" "<<setw(2)<<X[i][j]<<" ";
			}
		cout<<"|"<<endl;
		}





return **A,**B,**X;

}



