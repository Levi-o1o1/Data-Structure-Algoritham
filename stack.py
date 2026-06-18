stack = []
# this is push method to push things in stack , push use to insert 
stack.append(1)
stack.append(2)
stack.append(3)

print(stack)

# peek are used to see top element of stack and top element of stack is 3 because of LIFO 

topElement = stack[-1]
print("stack : ", topElement)

# pop for remove last element from stack and note pop also return object 

popElement = stack.pop()
print("pop element", popElement)

# stack after popped top element of stack 
print("stack after pop ", stack)