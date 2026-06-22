import array as a

val = a.array("i", [1,2,3,4,5,6,])
val.insert(1,50 )
val.append(30)
for i in range(0,6):
     print(val[i], end=" ")
