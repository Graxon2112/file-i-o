#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
 
 int main () {  
ofstream file;
string Input = "";
cout << "What is your name?\n";
cin >> Input;
file.open ("text.txt");
file << Input <<endl;
file.close();
return 0;
}
