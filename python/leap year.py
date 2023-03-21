year = int(input("Enter year:  "))

#Method 1
# if(year%400==0 or (year%4==0 and year%100!=0)):
#     print( f"{year} year is a leap year")
# else:
#     print(f"{year} is not a leap year")


#Method 2
if(year%4==0):
    if(year%100!=0):
        print(f"{year} is a leap year")
    elif(year%400==0):
        print(f"{year} is a leap year")
    else:
        print(f"{year} is not a leap year")
else:
    print(f"{year} is not a leap year")
