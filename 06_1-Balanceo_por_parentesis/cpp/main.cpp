#include "stackNode.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string readFileContent(string fileName) {
    string line, fileContent = "";
    fstream file(fileName, ios::in);
    if(file.is_open()) {
        while(getline(file, line)) {
            fileContent += line + "\n";
        }
        file.close();
    } else {
        cout<<"No se pudo abrir el archivo\n";
    }
    return fileContent;
}

bool checkParenthesis(string stringToValidate) {
    stackNode<char> *validatorStack = new stackNode<char>();
    for(int i = 0; i < stringToValidate.length(); i++) {
        char currentChar = stringToValidate[i];
        switch (currentChar)
        {
        case '(':
        case '[':
        case '{':
            validatorStack->push(currentChar);
            break;

        case ')':
        case ']':
        case '}':
            if (validatorStack->isEmpty()) {
                return false;
            } else {
                char charInStack = validatorStack->pop();
                if (currentChar == ')' && charInStack != '(')
                    return false;
                else if (currentChar == ']' && charInStack != '[')
                    return false;
                else if (currentChar == '}' && charInStack != '{')
                    return false;
            }
            break;
        
        default:
            break;
        }
    }
    return validatorStack->isEmpty();
}


int main() {
    std::cout << std::boolalpha;

    string file1 = "texto1.txt";
    string contentFile1 = readFileContent(file1);
    bool balancerFile1 = checkParenthesis(contentFile1);
    cout << "Archivo " << file1 << " - Balanceo: " << balancerFile1 << "\n";

    string file2 = "texto2.txt";
    string contentFile2 = readFileContent(file2);
    bool balancerFile2 = checkParenthesis(contentFile2);
    cout << "Archivo " + file2 + " - Balanceo: " << balancerFile2;
}

