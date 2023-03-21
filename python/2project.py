print("welcome my computer quiz!")

playing = input("do you want to play game :")
if playing.lower() !="yes": #.lower create every name to lower case and .upper create every name to upper case 
    quit() #ends the code 
print("okay let's play")
answer = input("what does CPU stanf for? ")
score = 0
if answer.lower() == "central processing unit":
    print('corret!')
    score =score+1
else :
    print('not correct!')
print("you got "+ str(score)+ " in the quiz")



