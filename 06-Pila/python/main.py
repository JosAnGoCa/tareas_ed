from stackNode import StackNode
from stackArray import StackArray

nodeStack = StackNode();

print("Stack using nodes")
print("isEmpty(): " + str(nodeStack.isEmpty()))
print("length(): " + str(nodeStack.getLength()))
print("push(1)")
nodeStack.push(1)
print("push(2)")
nodeStack.push(2)
print("push(3)")
nodeStack.push(3)
print(nodeStack)
print("peek(): " + str(nodeStack.peek()))
print("pop(): " + str(nodeStack.pop()))
print(nodeStack)

print("")

arrayStack = StackArray(5)
print("Stack using Array")
print("isEmpty(): " + str(arrayStack.isEmpty()))
print("length(): " + str(arrayStack.getLength()))
print("push(1)")
arrayStack.push(1)
print("push(2)")
arrayStack.push(2)
print("push(3)")
arrayStack.push(3)
print("push(4)")
arrayStack.push(4)
print("push(5)")
arrayStack.push(5)
print("isFull(): " + str(arrayStack.isFull()))
print(arrayStack)
print("peek(): " + str(arrayStack.peek()))
print("pop(): " + str(arrayStack.pop()))
print(arrayStack)
