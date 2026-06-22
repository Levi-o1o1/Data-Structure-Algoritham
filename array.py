import array as a

val = a.array("i", [1,2,3,4,5,6,])

for i in range(0,6):
     print(val[i], end=" ")

print("\n")

for x in val:
     print(x, end=' , ')

print("\n")
print(val.typecode)

val.reverse()

for i in range(0,6):
     print(val[i], end=" ")
