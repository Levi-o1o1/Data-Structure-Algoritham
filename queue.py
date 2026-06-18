# queue follow first in first out prinicpal FIFO

queue = []

# Enqueue

queue.append("A")
queue.append("B")
queue.append("C")

print("queue", queue)

# peek queue
frontElement = queue[0]

print("first element is :", frontElement)

# popped queue 
popedElement = queue.pop(0)
print("pop element is :", popedElement)

# pop after queue 
print("queue :", queue)