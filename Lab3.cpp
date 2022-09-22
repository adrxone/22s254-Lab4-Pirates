#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  //create ifstream object and open readme file
  ifstream inFile;
  inFile.open("README.md");

  //check for error when opening
  if(inFile.fail()){
    cout << "error opening file" << endl;
    exit(1);
  }

  string name = " ";

  while(!inFile.eof()){
    inFile >> name;
    cout << name;
  }

  inFile.close();
    return 0;
}
