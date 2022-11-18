import java.io.BufferedReader;
import java.io.FileReader;

public class Main {
    public static void main(String[] args) {
        String file1 = "texto1.txt";
        String contentFile1 = readFileContent(file1);
        boolean balancerFile1 = checkParenthesis(contentFile1);
        System.out.println("Archivo " + file1 +  " - Balanceo: " + balancerFile1);

        String file2 = "texto2.txt";
        String contentFile2 = readFileContent(file2);
        boolean balancerFile2 = checkParenthesis(contentFile2);
        System.out.println("Archivo " + file2 + " - Balanceo: " + balancerFile2);
    }

    public static boolean checkParenthesis(String stringToValidate) {
        StackNode<Character> validatorStack = new StackNode<>();

        for (int i = 0; i < stringToValidate.length(); i++) {
            char currentChar = stringToValidate.charAt(i);
            switch (currentChar) {
                case '(':
                case '[':
                case '{':
                    validatorStack.push(currentChar);
                    break;

                case ')':
                case ']':
                case '}':
                    if (validatorStack.isEmpty())
                        return false;
                    else {
                        char charInStack = validatorStack.pop();
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

        return validatorStack.isEmpty();
    }

    public static String readFileContent(String fileName) {
        String line, fileContent = "";
        try {
            FileReader fileReader = new FileReader(fileName);
            BufferedReader bufferedReader = new BufferedReader(fileReader);
            while ((line = bufferedReader.readLine()) != null) {
                fileContent += line;
            }
            bufferedReader.close();
        } catch (Exception e) {
            System.out.println("Error al leer el archivo");
        }
        return fileContent;
    }
}
