#include "queueNode.h"
#include "queueArray.h"

using namespace std;

int main() {
    queueNode<int> *nodeQueue = new queueNode<int>();
    cout << "Stack using nodes" << "\n";
    cout << "isEmpty(): " << nodeQueue->isEmpty() << "\n";
    cout << "enqueue(1)" << "\n";
    nodeQueue->enqueue(1);
    cout << "enqueue(2)" << "\n";
    nodeQueue->enqueue(2);
    cout << "enqueue(3)" << "\n";
    nodeQueue->enqueue(3);
    cout << *nodeQueue << "\n";
    cout << "length: " << nodeQueue->getLength() << "\n";
    cout << "isEmpty(): " << nodeQueue->isEmpty() << "\n";
    cout << "front: " << nodeQueue->frontValue() << "\n";
    cout << "dequeue(): " << nodeQueue->dequeue() << "\n";
    cout << "dequeue(): " << nodeQueue->dequeue() << "\n";
    cout << "dequeue(): " << nodeQueue->dequeue() << "\n";
    cout << "isEmpty(): " << nodeQueue->isEmpty() << "\n";


    queueArray<int> *arrayQueue = new queueArray<int>(5);
    cout << "Stack using array" << "\n";
    cout << "isEmpty(): " << arrayQueue->isEmpty() << "\n";
    cout << "enqueue(1)" << "\n";
    arrayQueue->enqueue(1);
    cout << "enqueue(2)" << "\n";
    arrayQueue->enqueue(2);
    cout << "enqueue(3)" << "\n";
    arrayQueue->enqueue(3);
    cout << *arrayQueue << "\n";
    cout << "length: " << arrayQueue->getLength() << "\n";
    cout << "isEmpty(): " << arrayQueue->isEmpty() << "\n";
    cout << "front: " << arrayQueue->frontValue() << "\n";
    cout << "dequeue(): " << arrayQueue->dequeue() << "\n";
    cout << "dequeue(): " << arrayQueue->dequeue() << "\n";
    cout << "dequeue(): " << arrayQueue->dequeue() << "\n";
    cout << "isEmpty(): " << arrayQueue->isEmpty() << "\n";

}
