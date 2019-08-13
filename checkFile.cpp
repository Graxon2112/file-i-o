#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{

		ofstream file;
		string line;
		string Input = "";
		string Yes = "y";
		string anser = "";
		cout << "What is your name?\n";
		cin >> Input;
		//file.open ("example.txt");
		file.open ("example.txt", std::ios_base::app);
		// look to see if the name is in the file before putting it in
		file << Input <<endl;
		file.close();
		// instead of showing names in the file, always look in the file and if you find it
		// output a message saying name found
		// if name is not in the file then put it in
		ifstream myfile ("example.txt");
		if (myfile.is_open())
		{

			//	while ( getline (myfile,line) )
			//	{
			//			cout << line << '\n';
			//	}
				myfile.close();
		}
		else cout << "Unable to open file";






}
