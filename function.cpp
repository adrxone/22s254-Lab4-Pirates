#include <iostream>
#include <fstream>
#include <string>
#include "header.h"
using namespace std;

string readandwrite(){
    //create ifstream object and open readme file
    ifstream inFile;
    inFile.open(ftoread);

    //check for error when opening
    if(inFile.fail()){
    cout << "error opening file" << endl;
    exit(1);
    }

    string name = " ";

    while(!inFile.eof()){
    inFile >> name;
    // cout << name;
    }

    inFile.close();
    return name;
}