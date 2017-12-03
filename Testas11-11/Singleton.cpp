
#include "Singleton.h"
#include "iostream"

using namespace std;

ifstream fd("Dalykai.txt");
ofstream fr("rezultatai.txt");

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}

void Singleton::writeToLogFile()
{
	cout << "Hello Singleton world" << endl;
}

void Singleton::ivedimas( int B[][b], int & n, int & m){

	fd >> n >> m;

	for( int i=0; i<n; i++){
		for ( int j=0; j<m; j++){
			fd >> B[i][j];
		}
	}
}

void Singleton::spausdinimas( int B[][b], int & n, int & m){

	int g=1;

	for( int i=0; i<n; i++){
		fr << "Mokinys Nr." << i+1 << " Ivertinimai:  ";
		g++;
		for ( int j=0; j<m; j++){
			fr << setw(3) << B[i][j];
		}
		fr << endl;
	}

}

void Singleton::desimtukai( int B[][b], int & n, int & m, int & mokinys){

	int g=0, k=0;

	for( int i=0; i<n; i++){
		for ( int j=0; j<m; j++){

			if(B[i][j] == 10)
			{
				g++;
			}

		}
		if (g > k)
		{
			k = g;
			mokinys = i+1;
		}
		g = 0;
	}

	if ( mokinys > 0)
	{
		fr << "Daugiausiai desimtuku turintis mokinys Nr: " << mokinys << endl;
	}
	else 
	{
		fr << "Nei vienas mokinys desimtuku neturi" << endl;
	}
}

void Singleton::desimtkiekis(int B[][b], int & n, int & m, int & mokinys){

	int kiekis = 0;

	for(int j = 0; j < m; j++)
	{
		if(B[mokinys-1][j] == 10)
		{
			kiekis++;
		}
	}
	
	fr << "Daugiausia desimtuku turincio mokinio desimtuku kiekis: " << kiekis << endl;
}


void Singleton::kiekis(int B[][b], int & n, int & m, int & mokinys){
	
	int neigiami=0, v=0;

	for( int i=0; i<n; i++){
		for ( int j=0; j<m; j++){
		
			if(B[i][j] < 4)
			{
				neigiami++;
			}
		}
		if(neigiami > 0){
			v++;
		}
		neigiami = 0;
}
if ( v > 0)
	{
		fr << "Mokiniu kiekis neturintys neigiamu pazymiu: " << n-v << endl;
	}
	else 
	{
		fr << "Nei vienas mokinys neigiamu pazymiu neturi" << endl;
	}
}

