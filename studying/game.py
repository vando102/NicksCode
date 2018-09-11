import random
import time

def displayIntro():
    print('''You are in a land full of dragons. In front of you, you see two caves.
in one cave, the dragon is friendly and will share his treasure with you. The other dragon is greedy
and hungry, and will eat you on sight.''')
    print()

def chooseCave():
    cave= ''
    while cave != '1' and cave != '2':
        print('Which cave will you go into? (1 or 2)')
        cave = input()
        return cave

def checkCave(chosenCave):
    print('You approach the cave...')
    time.sleep(2)#pauses the program for 2 seconds
    print('It is dark and spooky...')
    time.sleep(2)
    print('A large dragon jumps out in front of you! He opens his jaws and...')
    print('...........................')
    time.sleep(2)

    friendlyCave = random.randint(1, 2)

    if chosenCave == str(friendlyCave):
        print('Gives you his treasure!')
    else:
        print('Gobbles you down in one bite!')
playAgain = 'yes'
"""while playAgain == 'yes' or playAgain == 'y':
    displayIntro()
    caveNumber = chooseCave()
    checkCave(caveNumber)

    print('Do you want to play again? (yes or no)')
    playAgain = input()"""
class unit():
	def __init__(self,atk):
		self.atk = atk
	def atk_up(self, value):
		self.atk+=value
bob = unit(2)
bob.speed = 3
print(bob.speed)
bob.atk_up(2)
unit.atk_up(bob,2)
class player(unit):
	def __init__(self):
		self.the_best = True
	def set_atk(self,atk):
		self.atk = atk
sara = player()
sara.set_atk(1)
sara.atk_up(5)
print(sara.atk,sara.the_best)
