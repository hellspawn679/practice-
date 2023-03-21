import numpy as np
import math 
a=np.ones([5,5])
b=np.zeros([3,3])
b[1,1]=9
a[1:4,1:4]=b
print(a)
#be careful when copying an array 
a=np.array([1,2,3])
b=a
b[0]=100
print(b)
#make array a as 100, 2,3
print(a)
#to prevent it we do copy
a=np.array([1,2,3])
b=a.copy()
b[0]=100
print(b)
print(a)
#adds 2 to each element 
print(a+2)
print(a*2)
#add matrix
print(a+b)
#print trio function
print(np.sin(a))
#linear algebra 
c=np.ones((2,3))




