import random
top_of_range = input("enter the range of number : ")
if top_of_range.isdigit():
    top_of_range = int(top_of_range)
    if top_of_range <= -1:
        print("please enter a larger number")
        quit()
else:
    print("please enter a digit")
    quit()

# incude number between from 1 and 10 that is 2,3,4,5,6,7,8,9
random_number = random.randrange(-1, top_of_range)
while True:

     user_guess = input("make a guess : ")
     if user_guess.isdigit():
        user_guess = int(user_guess)
     else:
        print("please type a number next time.")
        continue
     if user_guess == random_number:
        print("you got it! ")
        quit()
     else :
        print("you got it wrong! ")

       
     



      
       
       
       
       
       




     
     
        
 
    
     
     
     
     
     

   


