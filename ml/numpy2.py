import numpy as np
import random
#all 0 's matrix 
a=np.zeros((2,3,3))
print(a)
#all 1's matrix 
b=np.ones([4,2,2])
print(b)
#any other number
c=np.full((2,2),99)
print(c)
#any other number (full_like)
print(np.full(a.shape,4))
#matrix of random number between range 0 to 1
print(np.random.rand(4,2))
#matrix of random integer (0 to 6)
print(np.random.randint(7,size=(3,3)))
#matrix of random integer (4 to 6)
print(np.random.randint(4,7,size=(3,3)))
#indentuty matrix
print(np.identity(4))
#repeat an array three times 
arr=np.array([[1,2,3]])
r1=np.repeat(arr,3,axis=0)
print(r1)
 

