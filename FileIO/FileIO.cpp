#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
}

void showFileIO()
{
	ifstream inFile;
	ofstream outFile;

	inFile.open("infile.txt");

	if (inFile.fail())
	{
		cout << "failed to open file\n";
		exit(1);
	}

	int number1, number2, sum;

	inFile >> number1 >> number2;

	outFile.open("outfile.txt");

	sum = number1 + number2;

	outFile << "the sum of inFile: ";
	outFile << sum;

	inFile.close();
	outFile.close();
}