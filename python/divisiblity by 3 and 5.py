num = int(input("Enter num :  "))
if((num%3==0) and (num%5==0)):
    print(f"{num} is divisible by both 3 and 5")
elif((num%3==0) and (num%5!=0)):
    print(f"{num} is divisible by 3")
elif((num%3!=0) and (num%5==0)):
    print(f"{num} is divisible by 5")