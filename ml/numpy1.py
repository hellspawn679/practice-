import numpy as np
#can spefie the type of data 
a=np.array([1,2,3],dtype='int16')
print(a)
b=np.array([[9.0,8.0,7.0],[6.0,5.0,4.0]])
c=np.array([[2,3,7],[5,1,7],[8,9,18]])
d= np.array([[1,2,3,4,5,6,7],[8,9,10,11,12,13,14]])

print(b)
print(c)
#get the dimension
print(a.ndim)
print(b.ndim)
#get the size of matrix
print(b.shape)
print(c.shape)
#get the type 
print(a.dtype)
#get the size of each element
print(a.itemsize)
#get a specific elment of the matrix[r,c] 
#here r belings to 0 to 2 since the size of the matrix is 3
print(c[2,2]) 
#get the whole row 
print(c[0,:])
#get the whole column 
print(c[:,1])
#getting more fancy [start index:end index:stepsize]
print(d[0,1:6:2])
#change any element 
c[2,2]=19
print(c[2,2])
#change a complete row or column
c[:,1]=[2,4,6]
print(c)

#3-d example
f=np.array([[[1,2],[3,4]],[[5,6],[7,8]]])
print(f)
#get a specfic element is 
print(f[0,1,1])


