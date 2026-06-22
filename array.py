import array as a

val = a.array("i", [1,2,3,4,5,6,])
val.insert(1,50 )
val.append(30)
val[3] = 300

copyArray = a.array(val.typecode, (x for x in val))
for i in range(0,len(val)):
     print(copyArray[i], end=" ")
