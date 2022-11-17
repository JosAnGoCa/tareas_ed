#include "stackNode.h"
#include "stackArray.h"

using namespace std;

int main() {
    stackNode<int> *nodeStack = new stackNode<int>();

    cout << "Stack using nodes" << "\n";
    cout << "isEmpty(): " << nodeStack->isEmpty() << "\n";
    cout << "length(): " << nodeStack->getLength() << "\n";
    cout << "push(1)" << "\n";
    nodeStack->push(1);
    cout << "push(2)" << "\n";
    nodeStack->push(2);
    cout << "push(3)" << "\n";
    nodeStack->push(3);
    cout << *nodeStack << "\n";
    cout << "peek(): " << nodeStack->peek() << "\n";
    cout << "pop(): " << nodeStack->pop() << "\n";
    cout << *nodeStack << "\n";

    stackArray<int> *arrayStack = new stackArray<int>(5);
    cout << "Stack using Array" << "\n";
    cout << "isEmpty(): " << arrayStack->isEmpty() << "\n";
    cout << "length(): " << arrayStack->getLength() << "\n";
    cout << "push(1)" << "\n";
    arrayStack->push(1);
    cout << "push(2)" << "\n";
    arrayStack->push(2);
    cout << "push(3)" << "\n";
    arrayStack->push(3);
    cout << "push(4)" << "\n";
    arrayStack->push(4);
    cout << "push(5)" << "\n";
    arrayStack->push(5);
    cout << "isFull(): " << arrayStack->isFull() << "\n";
    cout << *arrayStack << "\n";
    cout << "peek(): " << arrayStack->peek() << "\n";
    cout << "pop(): " << arrayStack->pop() << "\n";
    cout << *arrayStack << "\n";

}
