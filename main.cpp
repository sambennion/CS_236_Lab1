#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "Lexer.h"
int main(int argc, char* argv[]) {
    //cout << argv[1] << endl;
    std::ifstream inputFile;
    inputFile.open(argv[1]);
    std::ostringstream fout;
    fout << inputFile.rdbuf();
    std::string linecd ;
    std::string inputString = fout.str();
//    while(!inputFile.eof()){
//        getline(inputFile, line);
//        inputString += line + "\n";
//    }
    Lexer *scanner = new Lexer();
    scanner->Run(inputString);
    scanner->printTokens();
    return 0;
}
