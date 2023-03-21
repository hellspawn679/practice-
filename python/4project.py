import random
user_score = 0
computer_score = 0
options = ["rock", "paper", "scissor"]

while True:
    user_input = input("Type Rock/paper/scissor or Q to quit. ").lower()
    if user_input == 'q':
        break
    # in and not in is use to check values
    if user_input in options:
        continue
    random_number = random.randint(0, 2)
    # rock-->0 paper-->1 scissor-->2
    computer_pick = options[random_number]
    print("computer picked", computer_pick+".")
    if user_input == computer_pick:
        print("tie")
    elif user_input == "rock" and computer_pick == "scissor":
        print("you won!")
        user_wins += 1
    elif user_input == "rock" and computer_pick == "paper":
        print("you lost!")
        computer_score += 1
    elif user_input == "paper" and computer_pick == "rock":
        print("you won!")
        user_wins += 1
    elif user_input == "paper" and computer_pick == "scissor":
        print("you lost!")
        computer_score += 1

    elif user_input == "scissor" and computer_pick == "paper":
        print("you won!")
        user_wins += 1
    elif user_input == "scissor" and computer_pick == "rock":
        print("you lost!")
        computer_score += 1


print("goodbye!")
