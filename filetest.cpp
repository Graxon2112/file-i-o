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
		file << Input <<endl;
		file.close();
		cout << "Would you like me to tell you other names?\n";
		cout << "y/n\n";
		cin >> anser;
		if (Yes==anser)
		{
				ifstream myfile ("example.txt");
				if (myfile.is_open())
				{

						while ( getline (myfile,line) )
						{
								cout << line << '\n';
						}
				myfile.close();
		        }
				else cout << "Unable to open file";
		}//if (Yes==anser)





else
{
		cout <<"Ok! Have a nice day!\n";
}
}
