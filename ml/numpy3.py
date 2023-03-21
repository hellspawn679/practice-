import numpy as np
stats = np.array([[1,2,3],[4,5,6]])
print(stats)
print(np.max(stats))
print(np.max(stats,axis=1))
before =np.array([[1,2,3,4],[5,6,7,8]])
print(before)

after =before.reshape((4,2))
print(after)

#vertically stacking vectors
v1=np.array([1,2,3,4])
v2=np.array([5,6,7,8])
print(np.vstack([v1,v2,v1]))
#horizontal stacks 
h1=np.ones((2,4))
h2=np.zeros((2,2))
print(np.hstack((h1,h2)))
filesdata=np.genfromtxt('data.txt',delimiter=',')
print(filesdata)
#boolean masking and advanced indexing
print(filesdata>50)

print(filesdata[filesdata>50])
#you can index with a list in numpy
a=np.array([1,2,3,4,5,6,7,8,7,99,2])
print(a[[1,2,8]])


