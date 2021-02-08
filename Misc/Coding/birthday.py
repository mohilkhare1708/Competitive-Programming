# Get started with interactive Python
import turtle
from tkinter import *

#making the instructions page
first = Tk()
first.title("happy buddeyy :)")
first.geometry("600x400")
c = Canvas(first, bg="pink", height=2000, width=1000)
c.pack()
Label(first, text="Sooo, here are the rules for the game:\n- Move the yellow dot on the screen to clear the game.\n- Blue dots give you cookie points :D\n- Get ready for a littleee message in the end :)\n\n\nClose this window to start the game :)\nenjoiii~",font=("bold", 15), bg="pink").place(x=35, y=85)
first.mainloop()

wn = turtle.Screen()
wn.title("happy buddeeyyyy mere bhai <3")
wn.setup(700, 700)
wn.bgcolor("#008080")

#create pen
class Pen(turtle.Turtle):
  def __init__(self):
    turtle.Turtle.__init__(self)
    self.shape("circle")
    self.color("white")
    self.penup()
    self.speed(0)


class Pen1(turtle.Turtle):
  def __init__(self):
    turtle.Turtle.__init__(self)
    self.shape("circle")
    self.color("blue")
    self.penup()
    self.speed(0)


class Player(turtle.Turtle):
  def __init__(self):
    turtle.Turtle.__init__(self)
    self.shape("circle")
    self.color("yellow")
    self.penup()
    self.speed(0)
    self.score = 0

  def go_up(self):
    move_to_x = player.xcor()
    move_to_y = player.ycor() + 24

    if (move_to_x, move_to_y) not in walls:
        self.goto(move_to_x, move_to_y)
    if (move_to_x, move_to_y) in fruits:
        self.score += 10
        print(self.score)
    if (move_to_x, move_to_y) == (264.00, -312.00):
        turtle.bye()
        main = Tk()
        main.title("happy buddeyy :)")
        main.geometry("600x300")
        c = Canvas(main, bg="pink", height=2000, width=1000)
        c.pack()
        Label(main, text="Your final score = " + str(self.score) + " bas hogya ab ek saal ke liye\nok byeeee\n\n\n\n\t   happy birthday :p", font=("bold", 15), bg="pink").place(x=35, y=85)
        main.mainloop()

  def go_down(self):
    move_to_x = player.xcor()
    move_to_y = player.ycor() - 24

    if (move_to_x, move_to_y) not in walls:
        self.goto(move_to_x, move_to_y)
    if (move_to_x, move_to_y) in fruits:
        self.score += 10
        print(self.score)
    if (move_to_x, move_to_y) == (264.00, -312.00):
        turtle.bye()
        main = Tk()
        main.title("happy buddeyy :)")
        main.geometry("300x300")
        c = Canvas(main, bg="pink", height=2000, width=1000)
        c.pack()
        Label(main, text="Your final score = " + str(self.score) + "\n\n\nbas hogya ab ek saal ke liye\nok byeeee\n\n\n\n\t   happy birthday :p", font=("bold", 15), bg="pink").place(x=35, y=85)
        main.mainloop()

  def go_right(self):
    move_to_x = player.xcor() + 24
    move_to_y = player.ycor()

    if (move_to_x, move_to_y) not in walls:
        self.goto(move_to_x, move_to_y)
    if (move_to_x, move_to_y) in fruits:
        self.score += 10
        print(self.score)
    if (move_to_x, move_to_y) == (264.00, -312.00):
        turtle.bye()
        main = Tk()
        main.title("happy buddeyy :)")
        main.geometry("600x300")
        c = Canvas(main, bg="pink", height=2000, width=1000)
        c.pack()
        Label(main, text="Your final score = " + str(self.score) + " and once again a very happy birthday :))", font=("bold", 15), bg="pink").place(x=35, y=85)
        main.mainloop()

  def go_left(self):
    move_to_x = player.xcor() - 24  
    move_to_y = player.ycor()

    if (move_to_x, move_to_y) not in walls:
        self.goto(move_to_x, move_to_y)
    if (move_to_x, move_to_y) in fruits:
        self.score += 10
        print(self.score)
    if (move_to_x, move_to_y) == (264.00, -312.00):
        turtle.bye()
        main = Tk()
        main.title("happy buddeyy :)")
        main.geometry("600x300")
        c = Canvas(main, bg="pink", height=2000, width=1000)
        c.pack()
        Label(main, text="Your final score = " + str(self.score) + "and once again a very happy birthday :))", font=("bold", 15), bg="pink").place(x=35, y=85)
        main.mainloop()


#create Levels list
levels = [""]

#define first level
level_1 = [
    "XXXXXXXXXXXXXXXXXXXXXXXXX",
    "XP  XXXXXXX           OXX",
    "X  XXXXXXX  XXXXXX  XX XX",
    "X       XX  XXXXXX  X XXX",
    "X       XX  XXX        XX",
    "XXXXXX  XX  XXX        XX",
    "XXXXXX  XX  XXXXXX  XXXXX",
    "XXXXXX  XX    XXXX  XXXXX",
    "X OXXX        XXXX  XXXXX",
    "X  XXX  XXXXXXXXXXXXXXXXX",
    "X         XXXXXXXXXXXXXXX",
    "X                XXXXXXXX",
    "XXXXXXXXXXXX     XXXXXO X",
    "XXXXXXXXXXXXXXX  XXXXX  X",
    "XXX OXXXXXXXXXX         X",
    "XXX                     X",
    "XXX         XXXXXXXXXXXXX",
    "XXXXXXXXXX  XXXXXXXXXXXXX",
    "XXXXXXXXXX             OX",
    "XXO  XXXXX              X",
    "XX   XXXXXXXXXXXXX  XXXXX",
    "XX    YXXXXXXXXXXX  XXXXX",
    "XX          XXXX        X",
    "XXXX                    X",
    "XXXXXXXXXXXXXXXXXXXXXXX X"
]

#Add maze to mazes list
levels.append(level_1)

#Create Level Setup Function


def setup_maze(level):
  for y in range(len(level)):
    for x in range(len(level[y])):
      #Get the Character at each x,y coordinate
      #NOTE the order of the y and x in the next line
      character = level[y][x]
      #Calculate the screen x, y coordinates
      screen_x = -288 + (x * 24)
      screen_y = 288 - (y * 24)

      #Check if it is an X (representing a wall)
      if character == "X":
        pen.goto(screen_x, screen_y)
        pen.stamp()
        walls.append((screen_x, screen_y))

      if character == "P":
        player.goto(screen_x, screen_y)
    
      if character == "O":
        pen1.goto(screen_x, screen_y)
        pen1.stamp()
        fruits.append((screen_x, screen_y))
        


#Create class instances
pen = Pen()
pen1 = Pen1()
player = Player()

# Walls
walls = []
fruits = []
#print(walls)


#Set up the level
setup_maze(levels[1])
#print(walls)
#print(fruits)


#Keyboard Binding
turtle.listen()
turtle.onkey(player.go_left, "Left")
turtle.onkey(player.go_right, "Right")
turtle.onkey(player.go_up, "Up")
turtle.onkey(player.go_down, "Down")


#Turn off screen upates
wn.tracer(0)

#Main Game Loop
while True:
  # Update Screen
  wn.update()
  #print(player.position())
