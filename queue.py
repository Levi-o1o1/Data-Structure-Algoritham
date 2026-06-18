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

#dequeue popped queue 

DequeueElement = queue.pop(0)
print("pop element is :", DequeueElement)

# pop after queue 
print("queue :", queue)

isEmpty = not bool(queue)

print("queue is :", isEmpty)

# size of queue

print("size",len(queue))