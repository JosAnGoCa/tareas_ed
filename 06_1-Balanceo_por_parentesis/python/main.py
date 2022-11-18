from stackNode import StackNode

def readFileContent(fileName):
    file = open(fileName, "r")
    return file.read()

def checkParenthesis(stringToValidate):
    validatorStack = StackNode()
    for currentChar in stringToValidate:
        if currentChar == "(" or currentChar == "[" or currentChar == "{":
            validatorStack.push(currentChar)
        elif currentChar == ")" or currentChar == "]" or currentChar == "}":
            if validatorStack.isEmpty():
                return False
            else:
                charInStack = validatorStack.pop()
                if currentChar == ')' and charInStack != '(':
                    return False;
                elif currentChar == ']' and charInStack != '[':
                    return False;
                elif currentChar == '}' and charInStack != '{':
                    return False;
    return validatorStack.isEmpty()


file1 = "texto1.txt";
contentFile1 = readFileContent(file1);
balancerFile1 = checkParenthesis(contentFile1);
print("Archivo " + file1 + " - Balanceo: " + str(balancerFile1));

file2 = "texto2.txt";
contentFile2 = readFileContent(file2);
balancerFile2 = checkParenthesis(contentFile2);
print("Archivo " + file2 + " - Balanceo: " + str(balancerFile2));