import math
a = int(input("a = "))
b = int(input("b= "))
c = int(input("c= "))
#for a quqdratic equation ax**2 + bx + c = 0
d = ((b**2) - (4*a*c))
if(d>0):
    print("sol 1 = ", (-b + (d)**0.5)/2*a)
    print("sol 2 = ", (-b - (d)**0.5)/2*a)
else:
    print("no real root exsists")
